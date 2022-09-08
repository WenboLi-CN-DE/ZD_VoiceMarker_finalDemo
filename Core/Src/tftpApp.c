#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include "ff.h"
#include "lwip/opt.h"
#include <lwip/sockets.h>
#include "lwip/api.h"
#include "lwip/sys.h"
#include "ethernetif.h"
#include "lwip/apps/tftp_server.h"
struct tftp_context mytftp;

typedef struct
{
    uint8_t     isOpenOK;
    uint8_t     type;   //0:GCode 1:缓存GCode 2:固件
    uint8_t     write;
    char        name[64];
}TFTP_Handler;

TFTP_Handler    tftp_Handler;
FIL             file;

void* TFTP_Open(const char* fname, const char* mode, u8_t write)
{
    uint8_t     res;
    char        name[64];

    tftp_Handler.write  = write;
    tftp_Handler.type   = 0;

    strcpy(name, "0:");
    strcat(name, fname);

    if (write)
    {
        res= f_open(&file, name, FA_CREATE_ALWAYS|FA_WRITE);
    }
    else
    {
        res = f_open(&file, name, FA_OPEN_EXISTING|FA_READ);
    }

    tftp_Handler.isOpenOK = res;

    return &tftp_Handler;
}

void TFTP_Close(void* handle)
{
    uint8_t res = 0;

    if (((TFTP_Handler*)handle)->isOpenOK)
    {
        return;
    }

    f_close(&file);
    printf("Transfer file completed!\r\n");
}

int TFTP_Read(void* handle, void* buf, int bytes)
{
    uint8_t     res;
    UINT        br  = 0;

    res = ((TFTP_Handler*)handle)->isOpenOK;
    if (res)
    {
        return -1;
    }

    res = f_read(&file, (uint8_t*)buf, bytes, &br);
    printf("Read File:%d  Len:%d  br:%d\r\n", res, bytes, br);

    return br;
}

int TFTP_Write(void* handle, struct pbuf* p)
{
    uint8_t     res;
    UINT        bw  = 0;

    res = ((TFTP_Handler*)handle)->isOpenOK;
    if(res)
    {
        return -1;
    }

    res = f_write(&file, p->payload, p->len, &bw);
    printf("Write File:%d  Len:%d  bw:%d\r\n", res, p->len, bw);

    return 0;
}

void TFTP_ContextInit(void)
{
    mytftp.open     = TFTP_Open;
    mytftp.close    = TFTP_Close;
    mytftp.read     = TFTP_Read;
    mytftp.write    = TFTP_Write;
}

void tftpInit(void)
{
    TFTP_ContextInit();
    tftp_init(&mytftp);

    return;
}