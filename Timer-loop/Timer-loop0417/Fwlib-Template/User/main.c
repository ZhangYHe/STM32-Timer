#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_exti.h"
#include "bsp_ls.h"
#include "bsp_display.h"
#include "time.h"

int main(void)
{
	
	//LS_GPIO_Config();
	//USART_EXTI_Config();
	
	DISPLAY_GPIO_Config();
	/* ³õÊ¼»¯EXTIÖĞ¶Ï£»¼¤¹â´«¸ĞÆ÷µçÎ»±ä»¯´¥·¢ÖĞ¶Ï
  *  ´¥·¢ÖĞ¶Ï»á½øÈëstm32f4xx_it.cÎÄ¼şÖĞµÄº¯Êı
	*  £¬´¦ÀíÖĞ¶Ï£
	*/
	EXTI_LS_Config(); 
	
	/* µÈ´ıÖĞ¶Ï£¬ÓÉÓÚÊ¹ÓÃÖĞ¶Ï·½Ê½£¬CPU²»ÓÃÂÖÑ¯°´¼ü */
	while(1)                            
	{
		
	}
}
/*********************************************END OF FILE**********************/
