#ifndef __LS_H
#define	__LS_H

#include "stm32f10x.h"


/* ����LED���ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶ�LED���� */

// G-��ɫ
#define LS_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define LS_GPIO_CLK 	    RCC_APB2Periph_GPIOA		/* GPIO�˿�ʱ�� */
#define LS_GPIO_PIN		GPIO_Pin_5			        /* ���ӵ�SCLʱ���ߵ�GPIO */

void LS_GPIO_Config(void);

#endif /* __LS_H */
