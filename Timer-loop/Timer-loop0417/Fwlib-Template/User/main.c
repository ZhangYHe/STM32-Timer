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
	/* ��ʼ��EXTI�жϣ����⴫������λ�仯�����ж�
  *  �����жϻ����stm32f4xx_it.c�ļ��еĺ���
	*  �������жϣ
	*/
	EXTI_LS_Config(); 
	
	/* �ȴ��жϣ�����ʹ���жϷ�ʽ��CPU������ѯ���� */
	while(1)                            
	{
		
	}
}
/*********************************************END OF FILE**********************/
