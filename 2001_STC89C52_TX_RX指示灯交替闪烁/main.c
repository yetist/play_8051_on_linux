#include <mcs51/8052.h>

#define LED1 P3_0
#define LED2 P3_1

void Delay_ms(unsigned int n);

//****************************************************
//主函数
//****************************************************
void main(void)
{
  while(1)
  {
    LED1 = 0;
    LED2 = 1;
    Delay_ms(500);
    LED1 = 1;
    LED2 = 0;
    Delay_ms(500);
  }
}

//****************************************************
//MS延时函数(12M晶振下测试)
//****************************************************
void Delay_ms(unsigned int n)
{
  unsigned int  i, j;
  for(i=0; i<n; i++) {
    for(j=0; j<128; j++);
  }
}
