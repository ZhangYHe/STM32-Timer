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
	/* ��ʼ��EXTI�жϣ����⴫������λ�仯�����ж�
  *  �����жϻ����stm32f4xx_it.c�ļ��еĺ���
	*  �������жϣ
	*/
	
	/* �ȴ��жϣ�����ʹ���жϷ�ʽ��CPU������ѯ���� */

	while(1)                            
	{
		Receive_Flag=0;
		count();
		//TotalTime��λΪms��ת��Ϊs
		Display_Time(TotalTime/1000);
	}  
}
/*********************************************END OF FILE**********************/
