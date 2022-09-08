#include "lwip/opt.h"
#include "lwip/api.h"
#include "lwip/inet.h"
#include "lwip/sockets.h"
#include "lwip/apps/fs.h"
#include "lwip.h"
#include "tcp.h"

//TCP Client 测试

 void tcp_setup(void)
{
    uint32_t data = 0xdeadbeef;

    /* create an ip */
    struct ip_addr ip;
    IP4_ADDR(&ip, 110,777,888,999);    //IP of my PHP server

    /* create the control block */
    testpcb = tcp_new();    //testpcb is a global struct tcp_pcb
                            // as defined by lwIP


    /* dummy data to pass to callbacks*/

    tcp_arg(testpcb, &data);

    /* register callbacks with the pcb */

    tcp_err(testpcb, tcpErrorHandler);
    tcp_recv(testpcb, tcpRecvCallback);
    tcp_sent(testpcb, tcpSendCallback);

    /* now connect */
    tcp_connect(testpcb, &ip, 80, connectCallback);

}