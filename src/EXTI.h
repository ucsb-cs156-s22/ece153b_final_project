#ifndef __STM32L476G_NUCLEO_EXTI_H
#define __STM32L476G_NUCLEO_EXTI_H

#include "stm32l476xx.h"

void EXTI_Init(void);

void EXTI15_10_IRQHandler(void);
void TIM2_IRQHandler(void);

#endif
