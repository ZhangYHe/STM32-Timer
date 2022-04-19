#include "stm32f10x.h"
#include "core_cm3.h"
#include "misc.h"
#include "bsp_systick.h"
#include "bsp_ls.h"


int Receive_Flag=0;     //标记是否为第一次接收激光传感器中断
int TotalTime=0;

// couter 减1的时间 等于 1/systick_clk
// 当counter 从 reload 的值减小到0的时候，为一个循环，如果开启了中断则执行中断服务程序，
// 同时 CTRL 的 countflag 位会置1
// 这一个循环的时间为 reload * (1/systick_clk)

//中断方式计数
//void SysTick_CountTime_Ms(void)
//{
//	SysTick_Config(SystemCoreClock/1000);
//	
//	while(1)
//	{
//		// 当计数器的值减小到0的时候，CRTL寄存器的位16会置1
//		// 当置1时，读取该位会清0
//		while( !((SysTick->CTRL)&(1<<16)) );
//		if(Receive_Flag==1)
//			TotalTime++;
//		else if(Receive_Flag==2)
//			break;
//	}
//	// 关闭SysTick定时器
//	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
//}

//非中断方式计时

void count(void)
{
		SysTick_Config(SystemCoreClock/1000);
 
		while(1)
		{
			if(Receive_Flag==0&&(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1))
			{
				//等待下降沿
				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1);
				Receive_Flag=1;   //第一次接受激光传感器信号
			}
			//第一个下降沿结束，开始计时
			else if(Receive_Flag==1&&(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1))          
			{
				
				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1)
				{
					// 当计数器的值减小到0的时候，CRTL寄存器的位16会置1
					// 当置1时，读取该位会清0
						while( !((SysTick->CTRL)&(1<<16)) );
						TotalTime++;
				}
				Receive_Flag=2;  //第二次接受激光传感器信号
				break;
			}
		}
	// 关闭SysTick定时器
		SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}
/*********************************************END OF FILE**********************/
