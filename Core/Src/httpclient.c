#include "lwip/opt.h"
#include "lwip/api.h"
#include "lwip/inet.h"
#include "lwip/sockets.h"
#include "lwip/apps/fs.h"
#include "string.h"
#include "httpserver-socket.h"
#include "cmsis_os.h"
#include "stm32f769i_discovery.h"
#include "printf.h"
#include <stdio.h>

#define WEBSERVER_THREAD_PRIO    ( tskIDLE_PRIORITY + 4 )

uint32_t HTTP_GETPkt(char *pkt, const char *key, int data);

uint8_t get_buf[] = 
 "GET /download/hello.txt HTTP/1.1\r\n \
Host: 192.168.1.50:8080\r\n\r\n\r\n\r\n";

uint8_t echo_buf[] = "HTTP Process OK";



/**
  * @brief serve tcp connection  
  * @param conn: connection socket 
  * @retval None
  */
void http_client_serve(int conn)
{
	/*临时测试使用：*/
	char recvbuf[1500]; //存储 接收到的信息 
	int iDataNum;
	
	iDataNum  = recv(conn, recvbuf, sizeof(recvbuf), 0);
	recvbuf[iDataNum] = '\0';
	/* Check if request to get HTTP OK 200*/
  if (strncmp((char *)recvbuf,"HTTP/1.1 200 OK",15)==0) //比较两个字符串的前n个字符，区分大小写
  {
		printf("dsfaj");
  }

	
//	/* Close connection socket */
	close(conn);
}

/**
  * @brief  http client thread 
  * @param arg: pointer on argument(not used here) 
  * @retval None
  */
	
static void http_client_socket_thread(void *arg)
{
	int sock, newconn, size;
	struct sockaddr_in address, remotehost;

	address.sin_family = AF_INET; // 设置地址族为IPv4
  address.sin_port = htons(8080); // 设置目的地址的端口号信息
  address.sin_addr.s_addr = inet_addr("192.168.1.50");//　设置目的主机IP地址
	LWIP_UNUSED_ARG(arg);

		printf("正在建立连接服务器到：192.168.1.50 :8080...\r\n");
		 /* create a TCP socket */
		if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
		{
			return;
		}
		if(connect(sock, (const struct sockaddr *)&address, sizeof(address)) < 0)
		{
	//		write(sock,get_buf,sizeof(get_buf));
			printf("[TCP Client] Connect is fail.\r\n");
		}	
	
		printf("[TCP Client] Connect server is successful.\r\n");
		while (1) 
		{
			http_client_serve(sock);
		}
	


	
	/* Close connection socket */
  close(sock);
}

/**
  * @brief  Initialize the HTTP client (start its thread) 
  * @param  none
  * @retval None
  */
void http_client_socket_init()
{
  sys_thread_new("HTTP", http_client_socket_thread, NULL, DEFAULT_THREAD_STACKSIZE * 2, WEBSERVER_THREAD_PRIO);
}
