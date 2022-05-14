#include "bsp_ls.h"   

void LS_GPIO_Config(void)
{		
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*������ص�GPIO����ʱ��*/
		RCC_APB2PeriphClockCmd( LS_GPIO_CLK , ENABLE);
		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LS_GPIO_PIN;	

		/*��������ģʽΪ��������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;   

		/*������������Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*���ÿ⺯������ʼ��GPIO*/
		GPIO_Init(LS_GPIO_PORT, &GPIO_InitStructure);	
}


/*********************************************END OF FILE**********************/
