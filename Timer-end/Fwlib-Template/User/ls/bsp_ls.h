#ifndef __LS_H
#define	__LS_H

#include "stm32f10x.h"


/* 定义LED连接的GPIO端口, 用户只需要修改下面的代码即可改变控制的LED引脚 */

// G-绿色
#define LS_GPIO_PORT    	GPIOA			              /* GPIO端口 */
#define LS_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO端口时钟 */
#define LS_GPIO_PIN		GPIO_Pin_5			        /* 连接到SCL时钟线的GPIO */

void LS_GPIO_Config(void);

#endif /* __LS_H */
