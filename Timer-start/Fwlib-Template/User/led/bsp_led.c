#include "bsp_led.h"   
#include "time.h"
#include "bsp_ls.h"
//#include "bsp_display.h"
#include "stdio.h"

void LED_GPIO_Config(void)
{		
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*����LED��ص�GPIO����ʱ��*/
		RCC_APB2PeriphClockCmd( LED3_GPIO_CLK | LED2_GPIO_CLK, ENABLE);
		
		/*��������ģʽΪͨ���������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*������������Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*ѡ��Ҫ���Ƶ�GPIO����*/
		GPIO_InitStructure.GPIO_Pin = LED3_GPIO_PIN;

		/*���ÿ⺯������ʼ��GPIOF*/
		GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStructure);
	
		GPIO_InitStructure.GPIO_Pin = LED2_GPIO_PIN;
		GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStructure);
    /* �ر�����led��	*/
		GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
		GPIO_ResetBits(LED3_GPIO_PORT, LED3_GPIO_PIN);
}

//clock_t start,end;
//int Receive_Flag=0;     //����Ƿ�Ϊ��һ�ν��ռ��⴫�����ж�
//double TotalTime=0;

//void fun(void)
//{
////			LED2(1);
////			if(Receive_Flag==0)
////			{
////				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 0);
////				start = clock();
////				Receive_Flag=1;
////				LED2(0);
////			}
////			else
////			{
////				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 0);
////				end = clock();
////				TotalTime=(double)(end-start)/CLK_TCK;
////				Receive_Flag=0;
////				LED2(0);
////				printf("%f\n",TotalTime);
////				//��ʾʱ��
////				Display_Time();
////			}
//		start = clock();
//		for(int j = 0;j<=0xfffff;j++) {};
//		end = clock();
//		TotalTime=(double)(end-start)/CLK_TCK;
//Display_Time(TotalTime);
//		//printf("%f\n",TotalTime);
//}

/*********************************************END OF FILE**********************/
