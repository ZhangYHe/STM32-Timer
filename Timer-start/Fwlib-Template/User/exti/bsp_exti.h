#ifndef __EXTI_H
#define	__EXTI_H


#include "stm32f10x.h"

//输入源PB0——EXTI0中断线


//引脚定义
#define LS_INT_GPIO_PORT         GPIOB
#define LS_INT_GPIO_CLK          (RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO)
#define LS_INT_GPIO_PIN          GPIO_Pin_0
#define LS_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOB
#define LS_INT_EXTI_PINSOURCE    GPIO_PinSource0
#define LS_INT_EXTI_LINE         EXTI_Line0
#define LS_INT_EXTI_IRQ          EXTI0_IRQn

#define LS_IRQHandler            EXTI0_IRQHandler



void EXTI_LS_Config(void);


#endif /* __EXTI_H */
