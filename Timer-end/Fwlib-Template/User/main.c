#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_exti.h"
#include "bsp_ls.h"
#include "bsp_display.h"
#include "time.h"
#include "bsp_led.h"
#include "bsp_systick.h"

extern int Receive_Flag;
extern double TotalTime;

int main(void)
{
	
	LS_GPIO_Config();
	//EXTI_LS_Config(); 
	USART_EXTI_Config();
	LED_GPIO_Config();
	DISPLAY_GPIO_Config();
	/* 初始化EXTI中断；激光传感器电位变化触发中断
  *  触发中断会进入stm32f4xx_it.c文件中的函数
	*  ，处理中断�
	*/
	
	/* 等待中断，由于使用中断方式，CPU不用轮询按键 */
	while(1)                            
	{
		Receive_Flag=0;
		if(Receive_Flag==1)
			count();
		//TotalTime单位为ms，转化为s
		if(Receive_Flag==2)
			Display_Time(TotalTime/1000);
	}
}
/*********************************************END OF FILE**********************/
