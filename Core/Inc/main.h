/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"	
#include "stm32f769i_discovery.h"
#include "stm32f769i_discovery_audio.h"
#include "stm32f7xx.h"
#include "stm32f7xx_hal.h"
#include "ff.h"    
#include "ff_gen_drv.h"

#include "sdram_diskio.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
#define UBP_LIGHT_ON 0
#define UBP_LIGHT_OFF 1		
	
#define AUDIO_OUT_BUFFER_SIZE                      8192
#define AUDIO_IN_PCM_BUFFER_SIZE                   4*2304 /* buffer size in half-word */

#define FILEMGR_LIST_DEPDTH                        24
#define FILEMGR_FILE_NAME_SIZE                     40
#define FILEMGR_FULL_PATH_SIZE                     256
#define FILEMGR_MAX_LEVEL                          4    
#define FILETYPE_DIR                               0
#define FILETYPE_FILE                              1

/* Application State Machine Structure */
typedef enum {
  APPLICATION_IDLE = 0,  
  APPLICATION_START,   
  APPLICATION_READY,
  APPLICATION_DISCONNECT,
}AUDIO_ApplicationTypeDef;

/* Audio Demo State Structure */    
typedef enum {
  AUDIO_DEMO_IDLE = 0,
  AUDIO_DEMO_WAIT,  
  AUDIO_DEMO_EXPLORE,
  AUDIO_DEMO_PLAYBACK,
  AUDIO_DEMO_IN,  
}AUDIO_Demo_State;

/* Audio Demo State Machine Structure */
typedef struct _DemoStateMachine {
  __IO AUDIO_Demo_State state;
  __IO uint8_t select;  
}AUDIO_DEMO_StateMachine;

typedef enum {
  AUDIO_STATE_IDLE = 0,
  AUDIO_STATE_WAIT,    
  AUDIO_STATE_INIT,    
  AUDIO_STATE_PLAY,
  AUDIO_STATE_PRERECORD,
  AUDIO_STATE_RECORD,  
  AUDIO_STATE_NEXT,  
  AUDIO_STATE_PREVIOUS,
  AUDIO_STATE_FORWARD,   
  AUDIO_STATE_BACKWARD,
  AUDIO_STATE_STOP,   
  AUDIO_STATE_PAUSE,
  AUDIO_STATE_RESUME,
  AUDIO_STATE_VOLUME_UP,
  AUDIO_STATE_VOLUME_DOWN,
  AUDIO_STATE_ERROR,  
}AUDIO_PLAYBACK_StateTypeDef;

typedef enum {
  AUDIO_SELECT_MENU = 0,
  AUDIO_PLAYBACK_CONTROL,  
}AUDIO_DEMO_SelectMode;

typedef enum {
  BUFFER_OFFSET_NONE = 0,  
  BUFFER_OFFSET_HALF,  
  BUFFER_OFFSET_FULL,     
}BUFFER_StateTypeDef;

/* Audio buffer control struct */
typedef struct {
  uint8_t buff[AUDIO_OUT_BUFFER_SIZE];
  BUFFER_StateTypeDef state;
  uint32_t fptr;
}AUDIO_OUT_BufferTypeDef;

typedef enum {
  BUFFER_EMPTY = 0,  
  BUFFER_FULL,     
}WR_BUFFER_StateTypeDef;

typedef struct {
  uint16_t pcm_buff[AUDIO_IN_PCM_BUFFER_SIZE];
  uint32_t pcm_ptr;
  WR_BUFFER_StateTypeDef wr_state;
  uint32_t offset;  
  uint32_t fptr;
}AUDIO_IN_BufferTypeDef;

typedef struct {
  uint32_t ChunkID;       /* 0 */ 
  uint32_t FileSize;      /* 4 */
  uint32_t FileFormat;    /* 8 */
  uint32_t SubChunk1ID;   /* 12 */
  uint32_t SubChunk1Size; /* 16*/  
  uint16_t AudioFormat;   /* 20 */ 
  uint16_t NbrChannels;   /* 22 */   
  uint32_t SampleRate;    /* 24 */
  
  uint32_t ByteRate;      /* 28 */
  uint16_t BlockAlign;    /* 32 */  
  uint16_t BitPerSample;  /* 34 */  
  uint32_t SubChunk2ID;   /* 36 */   
  uint32_t SubChunk2Size; /* 40 */    
}WAVE_FormatTypeDef;


typedef struct _FILELIST_LineTypeDef {
  uint8_t type;
  uint8_t name[FILEMGR_FILE_NAME_SIZE];
}FILELIST_LineTypeDef;

typedef struct _FILELIST_FileTypeDef {
  FILELIST_LineTypeDef  file[FILEMGR_LIST_DEPDTH] ;
  uint16_t              ptr; 
}FILELIST_FileTypeDef;

typedef enum {
  AUDIO_ERROR_NONE = 0,  
  AUDIO_ERROR_IO,
  AUDIO_ERROR_EOF,
  AUDIO_ERROR_INVALID_VALUE,     
}AUDIO_ErrorTypeDef;


extern AUDIO_ApplicationTypeDef appli_state;
extern AUDIO_PLAYBACK_StateTypeDef AudioState;
extern FIL WavFile;

void AUDIO_MenuProcess(void);
uint8_t AUDIO_ShowWavFiles(void);

/* Disk Explorer API */
uint8_t AUDIO_StorageInit(void);
FRESULT AUDIO_StorageParse(void);
uint16_t AUDIO_GetWavObjectNumber(void);

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

void Error_Handler(void);
void AUDIO_MenuProcess(void);
uint8_t AUDIO_ShowWavFiles(void);

uint8_t AUDIO_StorageInit(void);
FRESULT AUDIO_StorageParse(void);
uint16_t AUDIO_GetWavObjectNumber(void);


//Screen2Views Information

//char disk;
//float diskload;
//char mem;
//float time;
//char zone;

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S3_Leftup_Pin GPIO_PIN_8
#define S3_Leftup_GPIO_Port GPIOB
#define S2_Rightup_Pin GPIO_PIN_9
#define S2_Rightup_GPIO_Port GPIOB
#define VSYNC_FREQ2_Pin GPIO_PIN_13
#define VSYNC_FREQ2_GPIO_Port GPIOJ
#define TriggerLED_Blue_Pin GPIO_PIN_11
#define TriggerLED_Blue_GPIO_Port GPIOA
#define DSI_RESET_Pin GPIO_PIN_15
#define DSI_RESET_GPIO_Port GPIOJ
#define RENDER_TIME_Pin GPIO_PIN_7
#define RENDER_TIME_GPIO_Port GPIOC
#define VSYNC_FREQ_Pin GPIO_PIN_6
#define VSYNC_FREQ_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_4
#define LED_GPIO_Port GPIOJ
#define RENDER_TIME2_Pin GPIO_PIN_5
#define RENDER_TIME2_GPIO_Port GPIOJ
#define TriggerLED_Red_Pin GPIO_PIN_6
#define TriggerLED_Red_GPIO_Port GPIOH
#define FRAMERATE_Pin GPIO_PIN_1
#define FRAMERATE_GPIO_Port GPIOJ
#define S1_Trigger_Pin GPIO_PIN_14
#define S1_Trigger_GPIO_Port GPIOB
#define TriggerLED_Green_Pin GPIO_PIN_15
#define TriggerLED_Green_GPIO_Port GPIOB
void   MX_I2C4_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
