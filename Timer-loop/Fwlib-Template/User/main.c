#include "stm32f10x.h"
#include "bsp_usart.h"
//#include "bsp_exti.h"
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
	//USART_EXTI_Config();
	LED_GPIO_Config();
	DISPLAY_GPIO_Config();
	/* ³õÊ¼»¯EXTIÖÐ¶Ï£»¼¤¹â´«¸ÐÆ÷µçÎ»±ä»¯´¥·¢ÖÐ¶Ï
  *  ´¥·¢ÖÐ¶Ï»á½øÈëstm32f4xx_it.cÎÄ¼þÖÐµÄº¯Êý
	*  £¬´¦ÀíÖÐ¶Ï£
	*/
	
	/* µÈ´ýÖÐ¶Ï£¬ÓÉÓÚÊ¹ÓÃÖÐ¶Ï·½Ê½£¬CPU²»ÓÃÂÖÑ¯°´¼ü */

	while(1)                            
	{
		Receive_Flag=0;
		count();
		//TotalTimeµ¥Î»Îªms£¬×ª»¯Îªs
		Display_Time(TotalTime/1000);
	}  
}
/*********************************************END OF FILE**********************/
