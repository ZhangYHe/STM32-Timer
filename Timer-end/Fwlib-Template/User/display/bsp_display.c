#include "bsp_display.h"   

void DISPLAY_GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*开启DISPLAY相关的GPIO外设时钟*/
		RCC_APB2PeriphClockCmd( DISPLAY1_GPIO_CLK | DISPLAY2_GPIO_CLK | DISPLAY4_GPIO_CLK | DISPLAY5_GPIO_CLK | DISPLAY7_GPIO_CLK | DISPLAY10_GPIO_CLK | DISPLAY11_GPIO_CLK | DISPLAY6_GPIO_CLK | \
		DISPLAY8_GPIO_CLK | DISPLAY9_GPIO_CLK | DISPLAY12_GPIO_CLK , ENABLE);
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = DISPLAY1_GPIO_PIN;	

		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*调用库函数，初始化GPIO*/
		GPIO_Init(DISPLAY1_GPIO_PORT, &GPIO_InitStructure);	
		
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY2_GPIO_PIN;
		GPIO_Init(DISPLAY2_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY4_GPIO_PIN;
		GPIO_Init(DISPLAY4_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY5_GPIO_PIN;
		GPIO_Init(DISPLAY5_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY7_GPIO_PIN;
		GPIO_Init(DISPLAY7_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY10_GPIO_PIN;
		GPIO_Init(DISPLAY10_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY11_GPIO_PIN;
		GPIO_Init(DISPLAY11_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY6_GPIO_PIN;
		GPIO_Init(DISPLAY6_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY8_GPIO_PIN;
		GPIO_Init(DISPLAY8_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY9_GPIO_PIN;
		GPIO_Init(DISPLAY9_GPIO_PORT, &GPIO_InitStructure);
		
		GPIO_InitStructure.GPIO_Pin = DISPLAY12_GPIO_PIN;
		GPIO_Init(DISPLAY12_GPIO_PORT, &GPIO_InitStructure);
		
		/* 关闭所有DISPLAY灯	*/
		GPIO_SetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
		
		GPIO_ResetBits(DISPLAY6_GPIO_PORT, DISPLAY6_GPIO_PIN);	 
		
		GPIO_ResetBits(DISPLAY8_GPIO_PORT, DISPLAY8_GPIO_PIN);
		
		GPIO_ResetBits(DISPLAY9_GPIO_PORT, DISPLAY9_GPIO_PIN);	 
		
		GPIO_ResetBits(DISPLAY12_GPIO_PORT, DISPLAY12_GPIO_PIN);
    
}

void Close_Display(void)
{
		GPIO_SetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
		
		GPIO_SetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);	 
		
		GPIO_SetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
	
		GPIO_ResetBits(DISPLAY6_GPIO_PORT, DISPLAY6_GPIO_PIN);	 
		
		GPIO_ResetBits(DISPLAY8_GPIO_PORT, DISPLAY8_GPIO_PIN);
		
		GPIO_ResetBits(DISPLAY9_GPIO_PORT, DISPLAY9_GPIO_PIN);	 
		
		GPIO_ResetBits(DISPLAY12_GPIO_PORT, DISPLAY12_GPIO_PIN);
}

void Chose_Number(int id,int number)
{
		switch(id)
		{
			case 1:
				GPIO_SetBits(DISPLAY12_GPIO_PORT, DISPLAY12_GPIO_PIN);
				break;
			case 2:
				GPIO_SetBits(DISPLAY9_GPIO_PORT, DISPLAY9_GPIO_PIN);
				break;
			case 3:
				GPIO_SetBits(DISPLAY8_GPIO_PORT, DISPLAY8_GPIO_PIN);
				break;
			case 4:
				GPIO_SetBits(DISPLAY6_GPIO_PORT, DISPLAY6_GPIO_PIN);
				break;
		}
		switch(number)
		{
			case 0:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				break;
			
			case 1:
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				break;
			
			case 2:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 3:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 4:
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 5:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 6:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 7:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				break;
			
			case 8:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY1_GPIO_PORT, DISPLAY1_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
			
			case 9:
				GPIO_ResetBits(DISPLAY11_GPIO_PORT, DISPLAY11_GPIO_PIN);
				GPIO_ResetBits(DISPLAY7_GPIO_PORT, DISPLAY7_GPIO_PIN);
				GPIO_ResetBits(DISPLAY4_GPIO_PORT, DISPLAY4_GPIO_PIN);
				GPIO_ResetBits(DISPLAY2_GPIO_PORT, DISPLAY2_GPIO_PIN);
				GPIO_ResetBits(DISPLAY10_GPIO_PORT, DISPLAY10_GPIO_PIN);
				GPIO_ResetBits(DISPLAY5_GPIO_PORT, DISPLAY5_GPIO_PIN);
				break;
		}
		//关闭所有数码管
		//Close_Display();
}

void Delay(void)
{
	for(int j = 0;j<=0xfff;j++) {};
}

void Display_Time(double temp)
{
	
		int num1,num2,num3,num4;
	
		num4=(int)(temp*100)%10;
    num3=(int)(temp*10)%10;
    num2=(int)(temp*1)%10;
    num1=(int)(temp/10)%10;
	
		while(1)
		{
				Chose_Number(1,num1);
				Delay();
			  Close_Display();
				Chose_Number(2,num2);
				Delay();
				Close_Display();
				Chose_Number(3,num3);
				Delay();
				Close_Display();
				Chose_Number(4,num4);
				Delay();
				Close_Display();
		}
}
/*	0--->ABCDEF			11/7/4/2/1/10
		1--->BC					7/4
		2--->ABDEG			11/7/2/1/5
		3--->ABCDG			11/7/4/2/5
		4--->BCFG				7/4/10/5
		5--->ACDFG			11/4/2/10/5
		6--->ACDEFG			11/4/2/1/10/5
		7--->ABC				11/7/4
		8--->ABCDEFG		11/7/4/2/1/10/5
		8--->ABCDFG  		11/7/4/2/10/5
*/

