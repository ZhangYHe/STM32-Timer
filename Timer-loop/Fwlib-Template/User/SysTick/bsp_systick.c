#include "stm32f10x.h"
#include "core_cm3.h"
#include "misc.h"
#include "bsp_systick.h"
#include "bsp_ls.h"


int Receive_Flag=0;     //����Ƿ�Ϊ��һ�ν��ռ��⴫�����ж�
int TotalTime=0;

// couter ��1��ʱ�� ���� 1/systick_clk
// ��counter �� reload ��ֵ��С��0��ʱ��Ϊһ��ѭ��������������ж���ִ���жϷ������
// ͬʱ CTRL �� countflag λ����1
// ��һ��ѭ����ʱ��Ϊ reload * (1/systick_clk)

//�жϷ�ʽ����
//void SysTick_CountTime_Ms(void)
//{
//	SysTick_Config(SystemCoreClock/1000);
//	
//	while(1)
//	{
//		// ����������ֵ��С��0��ʱ��CRTL�Ĵ�����λ16����1
//		// ����1ʱ����ȡ��λ����0
//		while( !((SysTick->CTRL)&(1<<16)) );
//		if(Receive_Flag==1)
//			TotalTime++;
//		else if(Receive_Flag==2)
//			break;
//	}
//	// �ر�SysTick��ʱ��
//	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
//}

//���жϷ�ʽ��ʱ

void count(void)
{
		SysTick_Config(SystemCoreClock/1000);
 
		while(1)
		{
			if(Receive_Flag==0&&(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1))
			{
				//�ȴ��½���
				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1);
				Receive_Flag=1;   //��һ�ν��ܼ��⴫�����ź�
			}
			//��һ���½��ؽ�������ʼ��ʱ
			else if(Receive_Flag==1&&(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1))          
			{
				
				while(GPIO_ReadInputDataBit(LS_GPIO_PORT,LS_GPIO_PIN) == 1)
				{
					// ����������ֵ��С��0��ʱ��CRTL�Ĵ�����λ16����1
					// ����1ʱ����ȡ��λ����0
						while( !((SysTick->CTRL)&(1<<16)) );
						TotalTime++;
				}
				Receive_Flag=2;  //�ڶ��ν��ܼ��⴫�����ź�
				break;
			}
		}
	// �ر�SysTick��ʱ��
		SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}
/*********************************************END OF FILE**********************/
