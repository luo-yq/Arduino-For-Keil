#ifndef __MCU_TYPE
#define __MCU_TYPE

#include "stm32f4xx.h"

#define __STM32F4__
#define F_CPU 180000000U

#define __KEILDUINO__ 140

#define digitalWrite_HIGH(Pin) (PIN_MAP[Pin].GPIOx->BSRRL  = PIN_MAP[Pin].GPIO_Pin_x)
#define digitalWrite_LOW(Pin)  (PIN_MAP[Pin].GPIOx->BSRRH  = PIN_MAP[Pin].GPIO_Pin_x)
#define digitalRead_Fast(Pin) ((PIN_MAP[Pin].GPIOx->IDR    & PIN_MAP[Pin].GPIO_Pin_x)!=0)
#define togglePin(Pin)         (PIN_MAP[Pin].GPIOx->ODR   ^= PIN_MAP[Pin].GPIO_Pin_x)

#define GPIO_HIGH(GPIOX,GPIO_PIN_X)    (GPIOX->BSRRL = GPIO_PIN_X)
#define GPIO_LOW(GPIOX,GPIO_PIN_X)     (GPIOX->BSRRH = GPIO_PIN_X)
#define GPIO_READ(GPIOX,GPIO_PIN_X)   ((GPIOX->IDR   & GPIO_PIN_X)!=0)
#define GPIO_TOGGLE(GPIOX,GPIO_PIN_X)  (GPIOX->ODR  ^= GPIO_PIN_X)

//*************** USART ***************//
#define IS_USARTx_SendDone(USARTx) (USARTx->SR & USART_FLAG_TXE)

#endif
