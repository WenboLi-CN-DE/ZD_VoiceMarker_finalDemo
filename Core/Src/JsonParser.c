#include "main.h"
#include "str.h"
#include "cJSON.h" 
#include "debug.h" 
#include "cmsis_os.h"
#include "JsonParser.h"
#include "time.h"

/* Definitions for cJsonQueue */
osMessageQueueId_t triggerQueueHandle;
const osMessageQueueAttr_t triggerQueue_attributes = {
  .name = "triggerQueue"
};

extern char_t buffer_http[128]; 
extern char buffer_trans[8196*2];
extern char *r;
extern osMessageQueueId_t cJsonQueueHandle;
extern osMessageQueueId_t fileNameQueueHandle;
extern void change();

void cpuInfoParser()
{
	cJSON *json, *json_1, *json_2, *json_3, *json_4, *json_5, *json_6; 
	MSGQUEUE_OBJ_t msg;
	
	json = cJSON_Parse(r);
	json_1 = cJSON_GetObjectItem(json, "cpu");
	json_2 = cJSON_GetObjectItem(json, "disk");
	json_3 = cJSON_GetObjectItem(json, "diskload");
	json_4 = cJSON_GetObjectItem(json, "mem");
	json_5 = cJSON_GetObjectItem(json, "time");
	json_6 = cJSON_GetObjectItem(json, "zone");
	
	TRACE_INFO("\r\n cpu:%s \
	\r\n disk:%s \
	\r\n diskload:%.0f \
	\r\n mem:%s \
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

void CANParser()
{
	cJSON *json, *json_can1, *json_can2, *json_can3, *json_can4, *json_can5, *json_can6,
	*json_can7,*json_can8,*json_can9,*json_can10,*json_can11,*json_can12,
	*json_can13,*json_can14,*json_can15,*json_can16,*json_can17,*json_can18; 
	json = cJSON_Parse(buffer_http);
	json_can1 = cJSON_GetObjectItem(json, "cpu");
	TRACE_INFO("\r\n can1:%s", json_can1->valuestring);	
}


void triggerParser()
{
	cJSON *json, *json_marker, *json_timestamp; 
	MSGQUEUE_OBJ_t msg_trigger;
	triggerQueueHandle = osMessageQueueNew (16, sizeof(char)*20, &triggerQueue_attributes);

	json = cJSON_Parse(r);
	int ArrLen = cJSON_GetArraySize(json);
	TRACE_INFO("\r\n lenth:%d",ArrLen);
	json_timestamp = cJSON_GetArrayItem(json, ArrLen-1);
	json_marker = cJSON_GetObjectItem(json_timestamp, "timestamp");
	TRACE_INFO("\r\n timestamp:%.0f",json_marker->valuedouble);
	snprintf(msg_trigger.Buf[0],20,"%.0f",json_marker->valuedouble);
	cJSON_Delete(json); //release cJson(necessary)
	osMessageQueuePut(triggerQueueHandle,&msg_trigger,0U,0);	

}



