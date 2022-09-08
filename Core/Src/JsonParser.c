#include "main.h"
#include "str.h"
#include "cJSON.h" 
#include "debug.h" 
#include "cmsis_os.h"
#include "JsonParser.h"
#include "time.h"

extern char_t buffer_http[128]; 
extern osMessageQueueId_t cJsonQueueHandle;
extern osMessageQueueId_t fileNameQueueHandle;
extern void change();


void cpuInfoParser()
{
	cJSON *json, *json_1, *json_2, *json_3, *json_4, *json_5, *json_6; 
	MSGQUEUE_OBJ_t msg;
	
	json = cJSON_Parse(buffer_http);
	json_1 = cJSON_GetObjectItem(json, "cpu");
	json_2 = cJSON_GetObjectItem(json, "disk");
	json_3 = cJSON_GetObjectItem(json, "diskload");
	json_4 = cJSON_GetObjectItem(json, "mem");
	json_5 = cJSON_GetObjectItem(json, "time");
	json_6 = cJSON_GetObjectItem(json, "zone");
	
	TRACE_INFO("\r\n cpu:%s \
	\r\n disk:%s \
	\r\n diskload:%.0f \
	\r\n mem::%s \
	\r\n time:%.0f \
	\r\n zone:%s ",
	json_1->valuestring,json_2->valuestring,json_3->valuedouble,
	json_4->valuestring,json_5->valuedouble,json_6->valuestring	);
	
	//timestamp parser:
	char s[20]; 
	time_t tick = json_5->valuedouble/1000; //Convert a millisecond timestamp to a second timestamp
	struct tm timestamp = *localtime(&tick); //A structure used to hold times and dates
	//Timer values are decomposed into TM structures and expressed in local time zones
	strftime(s, sizeof(s), "%d-%m-%Y %H:%M:%S", &timestamp); 					
	snprintf(msg.Buf[0],20, "%s",json_1->valuestring);
	snprintf(msg.Buf[1],20, "%s",json_2->valuestring);
	snprintf(msg.Buf[2],20, "%.f",json_3->valuedouble);
	snprintf(msg.Buf[3],20, "%s",json_4->valuestring);
	snprintf(msg.Buf[4],20, "%s",s);
	snprintf(msg.Buf[5],20, "%s",json_6->valuestring);	
	cJSON_Delete(json); //release cJson(necessary)
	osMessageQueuePut(cJsonQueueHandle,&msg,0U,0);
}




