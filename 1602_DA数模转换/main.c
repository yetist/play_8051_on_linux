#include <REGX52.H>
#include "Delay.h"
#include "Timer0.h"

#if defined(SDCC) || defined(__SDCC)
#define DA P2_1
#else
sbit DA=P2^1;
#endif

unsigned char Counter,Compare;	//计数值和比较值，用于输出PWM
unsigned char i;

void main(void)
{
	Timer0_Init();
	while(1)
	{
		for(i=0;i<100;i++)
		{
			Compare=i;			//设置比较值，改变PWM占空比
			Delay(10);
		}
		for(i=100;i>0;i--)
		{
			Compare=i;			//设置比较值，改变PWM占空比
			Delay(10);
		}
	}
}

#if defined(SDCC) || defined(__SDCC)
void Timer0_Routine(void) __interrupt(1) __using(1)
#else
void Timer0_Routine() interrupt 1
#endif
{
	TL0 = 0x9C;		//设置定时初值
	TH0 = 0xFF;		//设置定时初值
	Counter++;
	Counter%=100;	//计数值变化范围限制在0~99
	if(Counter<Compare)	//计数值小于比较值
	{
		DA=1;		//输出1
	}
	else				//计数值大于比较值
	{
		DA=0;		//输出0
	}
}
