#include "lwip/opt.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "cmsis_os.h"
#if LWIP_NETCONN

#include "lwip/sys.h"
#include "lwip/api.h"
#include "lwip/api.h"
#include "lwip/apps/fs.h"
#include "stm32f769i_discovery.h"
#include "printf.h"



#define TCPECHO_THREAD_PRIO  ( tskIDLE_PRIORITY + 4 )
#define KEY "cd0101"

uint32_t HTTP_GETPkt(char *pkt, const char *key, int data);

char HTTP_Buf[100];     //HTTP报文缓存区

const ip_addr_t remote_ip; 
char text[30];
char temp[10];
int data = 0;

struct fs_file file;
u32_t nPageHits = 0;

static const char http_html_hdr[] =
	 
"GET /download/hello.txt HTTP/1.1\r\nHost: 192.168.5.146:8080\r\n\r\n";

static const char http_index_html[] = 
	"Host: 192.168.5.146:8080\r\nAccept-Encoding: gzip, deflate, br\r\nConnection: keep-alive\r\n\r\n";



/**
  * @brief   组HTTP GET报文
  * @param   pkt   报文缓存指针
  * @param   key   key唯一识别码
  *	@param 	 data  数据
  */
uint32_t HTTP_GETPkt(char *pkt, const char *key, int data)
{
  *pkt = 0;
  memset(temp, 0, 10);
  memset(text, 0, 30);

  // 组装GET请求字符串
  sprintf(temp,"%d", data);
  strcat(text, "auth_key=");
  strcat(text, key);
  strcat(text, "&");
  strcat(text, "data=");
  strcat(text, temp);
  
  // 向服务器发送GET请求的文件地址
  strcat(pkt, "POST /upload");
  strcat(pkt, text);
  // 使用1.1版本HTTP
  strcat(pkt, " HTTP/1.1\r\n");
  // 服务器所在地址，这是自己电脑通过无线局域网建立的服务器
  // IP：192.168.1.108，PORT：8888
  strcat(pkt, "Host: 127.0.0.1:6789\r\n");
  // 保持连接
  strcat(pkt, "Connection: Keep-Alive\r\n");
  // 不使用缓存
  strcat(pkt, "Cache-Control: no-cache\r\n");
  strcat(pkt, "\r\n\r\n");
  
  return strlen(pkt);
}


/*-----------------------------------------------------------------------------------*/
static void tcpecho_thread(void *arg)
{
  ip_addr_t serverIpAddr;
  struct netbuf *buf;
  void *data;
  u16_t len;
	u16_t len1;
  err_t err;
  struct netconn *conn;

  IP4_ADDR(&serverIpAddr,192,168,1,96);// 服务器IP地址
      
  LWIP_UNUSED_ARG(arg);
      for( ;; )
      {
				
				printf("正在建立连接服务器到：192.168.5.146 :8080...\r\n");
	
				/* Create a new connection identifier. */
				conn = netconn_new(NETCONN_TCP);
				
				if (conn!=NULL)
				{
						/* Netconn connection to Server IP , port number 80 */
						err = netconn_connect(conn, &serverIpAddr, 8080);					
						if(err == ERR_OK)
						{

								printf("TCP Server 192.168.5.146 :8080 连接成功.\r\n");
								
								for( ;; )
								{
//									netconn_connect(conn, &serverIpAddr, 8080);
									if(BSP_PB_GetState(BUTTON_WAKEUP) == GPIO_PIN_SET)
									{
										while (BSP_PB_GetState(BUTTON_WAKEUP) == GPIO_PIN_SET);
										printf("test ok\r\n");
										netconn_write(conn, http_html_hdr,sizeof(http_html_hdr)-1, NETCONN_NOCOPY);		
//										netconn_write(conn, http_index_html,sizeof(http_index_html)-1, NETCONN_NOCOPY);
//										vTaskDelay(10);
//										netconn_close(conn);
																		
									}
//									netbuf_delete(buf);	
								}

						}
				
						printf("TCP Server 192.168.1.13 :65000 连接失败.\r\n");
						
						 netconn_close(conn);
						 netconn_delete(conn);
						
						/* vTaskDelayUntil是绝对延迟，vTaskDelay是相对延迟。*/
						vTaskDelay(1000);
				}
				else//(conn!=NULL)
				{
						printf("Can not create TCP netconn.\r\n");
						
						/* vTaskDelayUntil是绝对延迟，vTaskDelay是相对延迟。*/
						vTaskDelay(1000);
				}

		}
}
/*-----------------------------------------------------------------------------------*/

void tcpecho_init(void)
{
//	sys_thread_t n;
	sys_thread_new("tcpecho_thread", tcpecho_thread, NULL, DEFAULT_THREAD_STACKSIZE, TCPECHO_THREAD_PRIO);
//	printf("return=%d \r\n",n);
}
/*-----------------------------------------------------------------------------------*/

#endif /* LWIP_NETCONN */

