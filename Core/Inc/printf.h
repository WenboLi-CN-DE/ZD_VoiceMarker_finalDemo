#ifndef __printf_H
#define __printf_H


#include "stm32f7xx_hal.h"
#include "string.h"
#include "stdio.h"	
#include "stm32f769i_discovery.h"




#ifdef __GNUC__
/* With GCC, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */



#endif