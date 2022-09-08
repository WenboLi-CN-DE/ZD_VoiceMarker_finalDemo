/**
  ******************************************************************************
  * @file    Audio/Audio_playback_and_record/Src/explorer.c 
  * @author  MCD Application Team
  * @brief   This file provides USB Key drive configuration
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

#include <stdlib.h>
#include <string.h>

/* Private typedef -----------------------------------------------------------*/
extern FATFS RAMFatFs;
extern char RAMpath[4];
FILELIST_FileTypeDef FileList;
uint16_t NumObs = 0;
uint8_t fountokFlag = 0;
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Initializes the USB KEY Storage.
  * @param  None
  * @retval Status
  */
uint8_t AUDIO_StorageInit(void)
{
  /* Link the USB Key disk I/O driver */
  if((f_mount(&RAMFatFs, (TCHAR const*)RAMpath, 0) != FR_OK))
  {
    /* FatFs Initialization Error */
 //   LCD_ErrLog("Cannot Initialize FatFs! \n");
		fountokFlag = 1;
    return 1;
  }
  else
  {
 //   LCD_DbgLog ("INFO : FatFs Initialized! \n");
		fountokFlag = 2;
//		BSP_LED_On(LED1);		
    return 0;
  }
}

/**
  * @brief  Copies disk content in the explorer list. 复制资源管理器列表中的磁盘内容
  * @param  None
  * @retval Operation result
  */
FRESULT AUDIO_StorageParse(void)
{
  FRESULT res = FR_OK;
  FILINFO fno;
  DIR dir;
  char *fn;
  
  res = f_opendir(&dir, RAMpath);
  FileList.ptr = 0;
//  BSP_LED_On(LED1);
  if(res == FR_OK)
  {
		BSP_LED_On(LED1);
    while(BSP_SDRAM_Init() == SDRAM_OK )
    {
      res = f_readdir(&dir, &fno);
//			BSP_LED_On(LED1);
      if(res != FR_OK || fno.fname[0] == 0)
      {
        break;
      }
      if(fno.fname[0] == '.')
      {
        continue;
      }

      fn = fno.fname;
      
      if(FileList.ptr < FILEMGR_LIST_DEPDTH)
      {
        if((fno.fattrib & AM_DIR) == 0)
        {
          if((strstr(fn, "wav")) || (strstr(fn, "WAV")))
          {
            strncpy((char *)FileList.file[FileList.ptr].name, (char *)fn, FILEMGR_FILE_NAME_SIZE);
            FileList.file[FileList.ptr].type = FILETYPE_FILE;
            FileList.ptr++;
          }
        }
      }   
    }
  }
	else if(res != FR_OK)
	{
	//	BSP_LED_On(LED1);
	}
		
  NumObs = FileList.ptr;
  f_closedir(&dir);
  return res;
}


/**
  * @brief  Shows audio file (*.wav) on the root
  * @param  None
  * @retval None
  */
uint8_t AUDIO_ShowWavFiles(void)
{
  uint8_t i = 0;
  uint8_t line_idx = 0;
  if(AUDIO_StorageInit() == FR_OK)
  {
    if(AUDIO_StorageParse() ==  FR_OK)
    {
      if(FileList.ptr > 0)
      {
//      BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
//        LCD_UsrLog("audio file(s) [ROOT]:\n\n");
        
        for(i = 0; i < FileList.ptr; i++)
        {
          line_idx++;
//          LCD_DbgLog("   |__");
//          LCD_DbgLog((char *)FileList.file[i].name);
//          LCD_DbgLog("\n");
        }
//        BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
//        LCD_UsrLog("\nEnd of files list.\n");
        return 0;
      }
      return 1;
    }
    return 2;
  }
  else
  {
    return 3;
  }
}

/**
  * @brief  Gets Wav Object Number.
  * @param  None
  * @retval None
  */
uint16_t AUDIO_GetWavObjectNumber(void)
{
  return NumObs;
}

