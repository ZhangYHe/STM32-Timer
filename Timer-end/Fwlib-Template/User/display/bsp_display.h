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

extern double TotalTime;

void DISPLAY_GPIO_Config(void);
void Close_Display(void);
void Chose_Number(int number);
void Display_Time(void);

#endif /* __DISPLAY_H */
