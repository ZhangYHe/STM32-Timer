#ifndef __DISPLAY_H
#define	__DISPLAY_H

#include "stm32f10x.h"

#define DISPLAY1_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY1_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY1_GPIO_PIN		GPIO_Pin_1			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY2_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY2_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY2_GPIO_PIN		GPIO_Pin_2			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY4_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY4_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY4_GPIO_PIN		GPIO_Pin_3			        /* 连接到SCL时钟线的GPIO */

#define DISPLAY5_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY5_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY5_GPIO_PIN		GPIO_Pin_4			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY7_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY7_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY7_GPIO_PIN		GPIO_Pin_5			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY10_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY10_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY10_GPIO_PIN		GPIO_Pin_6			        /* 连接到SCL时钟线的GPIO */

#define DISPLAY11_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define DISPLAY11_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define DISPLAY11_GPIO_PIN		GPIO_Pin_7			        /* 连接到SCL时钟线的GPIO */

//12 9 8 6
#define DISPLAY6_GPIO_PORT    	GPIOG			              /* GPIO端口 */
#define DISPLAY6_GPIO_CLK 	    RCC_APB2Periph_GPIOG		/* GPIO端口时钟 */
#define DISPLAY6_GPIO_PIN		GPIO_Pin_11			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY8_GPIO_PORT    	GPIOC			              /* GPIO端口 */
#define DISPLAY8_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define DISPLAY8_GPIO_PIN		GPIO_Pin_7			        /* 连接到SCL时钟线的GPIO */


#define DISPLAY9_GPIO_PORT    	GPIOC			              /* GPIO端口 */
#define DISPLAY9_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define DISPLAY9_GPIO_PIN		GPIO_Pin_1			        /* 连接到SCL时钟线的GPIO */

#define DISPLAY12_GPIO_PORT    	GPIOF			              /* GPIO端口 */
#define DISPLAY12_GPIO_CLK 	    RCC_APB2Periph_GPIOF		/* GPIO端口时钟 */
#define DISPLAY12_GPIO_PIN		GPIO_Pin_6			        /* 连接到SCL时钟线的GPIO */
extern double TotalTime;

void DISPLAY_GPIO_Config(void);
void Close_Display(void);
void Chose_Number(int id,int number);
void Display_Time(void);
void Delay(void);
#endif /* __DISPLAY_H */
