#ifndef __EXTI_H
#define	__EXTI_H


#include "stm32f10x.h"

//输入源PB0——EXTI0中断线


//引脚定义
#define LS_INT_GPIO_PORT         GPIOA
#define LS_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define LS_INT_GPIO_PIN          GPIO_Pin_4
#define LS_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOB
#define LS_INT_EXTI_PINSOURCE    GPIO_PinSource0
#define LS_INT_EXTI_LINE         EXTI_Line0
#define LS_INT_EXTI_IRQ          EXTI0_IRQn

#define LS_IRQHandler            EXTI0_IRQHandler

/** 
  * 串口宏定义，不同的串口挂载的总线和IO不一样，移植时需要修改这几个宏
	* 1-修改总线时钟的宏，uart1挂载到apb2总线，其他uart挂载到apb1总线
	* 2-修改GPIO的宏
  */
	
//// 串口1-USART1
//#define  DEBUG_USARTx                   USART1
//#define  DEBUG_USART_CLK                RCC_APB2Periph_USART1
//#define  DEBUG_USART_APBxClkCmd         RCC_APB2PeriphClockCmd
//#define  DEBUG_USART_BAUDRATE           115200

//// USART GPIO 引脚宏定义
//#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
//#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  DEBUG_USART_TX_GPIO_PORT       GPIOA   
//#define  DEBUG_USART_TX_GPIO_PIN        GPIO_Pin_9
//#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
//#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_10

//#define  DEBUG_USART_IRQ                USART1_IRQn
//#define  DEBUG_USART_IRQHandler         USART1_IRQHandler

//串口2-USART2
#define  DEBUG_USARTx                   USART2
#define  DEBUG_USART_CLK                RCC_APB1Periph_USART2
#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART_BAUDRATE           115200

// USART GPIO 引脚宏定义
#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART_TX_GPIO_PORT       GPIOA   
#define  DEBUG_USART_TX_GPIO_PIN        GPIO_Pin_2
#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_3

#define  DEBUG_USART_IRQ                USART2_IRQn
#define  DEBUG_USART_IRQHandler         USART2_IRQHandler

void EXTI_LS_Config(void);
void USART_EXTI_Config(void);

#endif /* __EXTI_H */
