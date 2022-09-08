#ifndef __USER_BUTTON_LED_H
#define __USER_BUTTON_LED_H

#include "stm32f7xx_hal.h"

typedef enum
{
	USER_LED_RED = 0,
	USER_LED_GREEN = 1,
	USER_LED_BLUE = 2,
	USER_LED_LED = 3

} User_Led_TypeDef;

typedef enum
{
  USER_BUTTON_S1 = 0,
	USER_BUTTON_S2 = 1,
	USER_BUTTON_S3 = 2
} User_Button_TypeDef;

typedef enum
{
 USER_BUTTON_MODE_GPIO = 0,
 USER_BUTTON_MODE_EXTI = 1
} User_ButtonMode_TypeDef;


typedef enum 
{
  USER_PB_SET = 0, 
  USER_PB_RESET = !USER_PB_SET
} User_ButtonValue_TypeDef;


#define USER_LEDn                ((uint8_t)4)
#define USER_LED_RED_PORT        ((GPIO_TypeDef*)GPIOH)
#define USER_LED_GREEN_PORT      ((GPIO_TypeDef*)GPIOB)
#define USER_LED_BLUE_PORT       ((GPIO_TypeDef*)GPIOA)
#define USER_LED_LED_PORT        ((GPIO_TypeDef*)GPIOJ)


#define USER_BUTTONn              ((uint8_t)3)
#define USER_BUTTON_S1_PORT       GPIOB
#define USER_BUTTON_S2_PORT       GPIOB
#define USER_BUTTON_S3_PORT       GPIOB



#define USER_LED_RED_PIN    ((uint32_t)GPIO_PIN_6)
#define USER_LED_GREEN_PIN  ((uint32_t)GPIO_PIN_15)
#define USER_LED_BLUE_PIN  ((uint32_t)GPIO_PIN_11)
#define USER_LED_LED_PIN  ((uint32_t)GPIO_PIN_4)

#define USER_BUTTON_S1_PIN         GPIO_PIN_14
#define USER_BUTTON_S2_PIN         GPIO_PIN_9
#define USER_BUTTON_S3_PIN         GPIO_PIN_8


#define LEDx_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOJ_CLK_ENABLE()
#define LEDx_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOJ_CLK_DISABLE()

#define BUTTON_GPIO_CLK_ENABLE()            __HAL_RCC_GPIOA_CLK_ENABLE()
#define USER_BUTTON_S1_IRQn             EXTI0_IRQn
#define USER_BUTTON_S2_IRQn             EXTI0_IRQn
#define USER_BUTTON_S3_IRQn             EXTI0_IRQn




void User_LED_On (User_Led_TypeDef User_Led);
void User_LED_Init(User_Led_TypeDef Led);
void User_LED_DeInit(User_Led_TypeDef Led);
void User_LED_On(User_Led_TypeDef Led);
void User_LED_Off(User_Led_TypeDef Led);
void User_LED_Toggle(User_Led_TypeDef Led);
void User_PB_Init(User_Button_TypeDef Button, User_ButtonMode_TypeDef Button_Mode);
void User_PB_DeInit(User_ButtonMode_TypeDef Button);
uint32_t User_PB_GetState(User_Button_TypeDef Button);

#endif 