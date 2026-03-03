#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f4xx_hal.h"
#include "cmsis_os.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_I2C1_Init(void);
void MX_SPI1_Init(void);
void MX_USART1_UART_Init(void);

#endif
