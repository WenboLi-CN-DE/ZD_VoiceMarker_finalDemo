#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cmsis_os2.h>
#include "string.h"
#include "stdio.h"
#include "main.h"


extern "C"
{
	extern osMessageQueueId_t cJsonQueueHandle; 
	extern osMessageQueueId_t cJsonCPU_Queue_1_Handle;
	extern osMessageQueueId_t fileNameQueueHandle;
}
Model::Model() : modelListener(0), diskload_model()
{
	BSP_LED_Init(LED1);
}

void Model::tick()
{
		char middle[6][20];
		char file_name[65];

	  if (osMessageQueueGet(cJsonQueueHandle, &middle, 0U, 0) == osOK)
    {
			BSP_LED_Toggle(LED1);
			for (int i=0;i<=5;i++)
			{
				snprintf(diskload_model[i], 20, "%s" ,middle[i]);
			}
			modelListener-> cpuChanged();
			modelListener-> diskChanged();
			modelListener-> diskLoadChanged();
			modelListener-> memChanged();
			modelListener-> timeChanged();
			modelListener-> zoneChanged();
		}
		
		osMessageQueueGet(fileNameQueueHandle, &file_name, 0U, 0);

}



