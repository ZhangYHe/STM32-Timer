#ifndef __DISPLAY_H
#define	__DISPLAY_H

#include "stm32f10x.h"

#define DISPLAY1_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY1_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY1_GPIO_PIN		GPIO_Pin_1			        /* ���ӵ�SCLʱ���ߵ�GPIO */


#define DISPLAY2_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY2_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY2_GPIO_PIN		GPIO_Pin_2			        /* ���ӵ�SCLʱ���ߵ�GPIO */


#define DISPLAY4_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY4_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY4_GPIO_PIN		GPIO_Pin_3			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define DISPLAY5_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY5_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY5_GPIO_PIN		GPIO_Pin_4			        /* ���ӵ�SCLʱ���ߵ�GPIO */


#define DISPLAY7_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY7_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY7_GPIO_PIN		GPIO_Pin_5			        /* ���ӵ�SCLʱ���ߵ�GPIO */


#define DISPLAY10_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY10_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY10_GPIO_PIN		GPIO_Pin_6			        /* ���ӵ�SCLʱ���ߵ�GPIO */

#define DISPLAY11_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define DISPLAY11_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define DISPLAY11_GPIO_PIN		GPIO_Pin_7			        /* ���ӵ�SCLʱ���ߵ�GPIO */

extern double TotalTime;

void DISPLAY_GPIO_Config(void);
void Close_Display(void);
void Chose_Number(int number);
void Display_Time(void);

#endif /* __DISPLAY_H */
