#include "User_Button_LED.h"


GPIO_TypeDef* USER_GPIO_PORT[USER_LEDn] = {USER_LED_RED_PORT,
																					USER_LED_GREEN_PORT,
																					USER_LED_BLUE_PORT,
																					USER_LED_LED_PORT,};

																					
uint32_t USER_GPIO_PIN[USER_LEDn] = {USER_LED_RED_PIN,
																		USER_LED_GREEN_PIN,
																		USER_LED_BLUE_PIN,
																		USER_LED_LED_PIN};

																		
GPIO_TypeDef* USER_BUTTON_PORT[USER_BUTTONn] = {USER_BUTTON_S1_PORT,
																								USER_BUTTON_S2_PORT,
																								USER_BUTTON_S3_PORT};	

																								
uint32_t USER_BUTTON_PIN[USER_BUTTONn] = {USER_BUTTON_S1_PIN,
																			USER_BUTTON_S2_PIN,
																			USER_BUTTON_S3_PIN};	

																			
																			
const uint16_t USER_BUTTON_IRQn[USER_BUTTONn] = {USER_BUTTON_S1_IRQn,
																									USER_BUTTON_S2_IRQn,
																									USER_BUTTON_S3_IRQn};	

																									
																									
void User_LED_Init(User_Led_TypeDef Led)
{
  GPIO_InitTypeDef  gpio_init_structure;
  
  LEDx_GPIO_CLK_ENABLE();
  /* Configure the GPIO_LED pin */
  gpio_init_structure.Pin   = USER_GPIO_PIN[Led];
  gpio_init_structure.Mode  = GPIO_MODE_OUTPUT_PP;
  gpio_init_structure.Pull  = GPIO_PULLUP;
  gpio_init_structure.Speed = GPIO_SPEED_HIGH;
  
  HAL_GPIO_Init(USER_GPIO_PORT[Led], &gpio_init_structure);

}																		
															 
void User_LED_On (User_Led_TypeDef User_Led)
{
  HAL_GPIO_WritePin(USER_GPIO_PORT[User_Led], USER_GPIO_PIN[User_Led], GPIO_PIN_SET);
}

void User_LED_Off(User_Led_TypeDef User_Led)
{
  HAL_GPIO_WritePin(USER_GPIO_PORT[User_Led], USER_GPIO_PIN[User_Led], GPIO_PIN_RESET);
}

void User_LED_Toggle(User_Led_TypeDef User_Led)
{
  HAL_GPIO_TogglePin(USER_GPIO_PORT[User_Led], USER_GPIO_PIN[User_Led]);
}

void User_PB_Init(User_Button_TypeDef Button, User_ButtonMode_TypeDef Button_Mode)
{
  GPIO_InitTypeDef gpio_init_structure;

  /* Enable the BUTTON clock */
  BUTTON_GPIO_CLK_ENABLE();

  if(Button_Mode == USER_BUTTON_MODE_GPIO)
  {
    /* Configure Button pin as input */
    gpio_init_structure.Pin = USER_BUTTON_PIN[Button];
    gpio_init_structure.Mode = GPIO_MODE_INPUT;
    gpio_init_structure.Pull = GPIO_NOPULL;
    gpio_init_structure.Speed = GPIO_SPEED_FAST;
    HAL_GPIO_Init(USER_BUTTON_PORT[Button], &gpio_init_structure);
  }
	if(Button_Mode == USER_BUTTON_MODE_EXTI)
  {
    /* Configure Button pin as input with External interrupt */
    gpio_init_structure.Pin = USER_BUTTON_PIN[Button];
    gpio_init_structure.Pull = GPIO_NOPULL;
    gpio_init_structure.Speed = GPIO_SPEED_FAST;

    gpio_init_structure.Mode = GPIO_MODE_IT_RISING;

    HAL_GPIO_Init(USER_BUTTON_PORT[Button], &gpio_init_structure);

    /* Enable and set Button EXTI Interrupt to the lowest priority */
    HAL_NVIC_SetPriority((IRQn_Type)(USER_BUTTON_IRQn[Button]), 0x0F, 0x00);
    HAL_NVIC_EnableIRQ((IRQn_Type)(USER_BUTTON_IRQn[Button]));
  }

}
void User_PB_DeInit(User_ButtonMode_TypeDef Button)
{
    GPIO_InitTypeDef gpio_init_structure;

    gpio_init_structure.Pin = USER_BUTTON_PIN[Button];
//    HAL_NVIC_DisableIRQ((IRQn_Type)(USER_BUTTON_IRQn[Button]));
    HAL_GPIO_DeInit(USER_BUTTON_PORT[Button], gpio_init_structure.Pin);
}

uint32_t User_PB_GetState(User_Button_TypeDef Button)
{
  return HAL_GPIO_ReadPin(USER_BUTTON_PORT[Button], USER_BUTTON_PIN[Button]);
}
