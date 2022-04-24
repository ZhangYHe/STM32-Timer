#include "bsp_led.h"   
#include "time.h"
#include "bsp_ls.h"
//#include "bsp_display.h"
#include "stdio.h"

void LED_GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*开启LED相关的GPIO外设时钟*/
		RCC_APB2PeriphClockCmd( LED3_GPIO_CLK | LED2_GPIO_CLK, ENABLE);
		
		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED3_GPIO_PIN;

		/*调用库函数，初始化GPIOF*/
		GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStructure);
	
		GPIO_InitStructure.GPIO_Pin = LED2_GPIO_PIN;
		GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStructure);
    /* 关闭所有led灯	*/
		GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
		GPIO_ResetBits(LED3_GPIO_PORT, LED3_GPIO_PIN);
}

//clock_t start,end;
//int Receive_Flag=0;     //标记是否为第一次接收激光传感器中断
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
////				//显示时间
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
