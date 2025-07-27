#include <REGX52.H>
#include "Delay.h"
#include "UART.h"

void main(void)
{
  UART_Init();    //串口初始化
  while(1) {};
}


#if defined (SDCC) || defined (__SDCC)
void UART_Routine(void) __interrupt (4) __using (4)
#else
void UART_Routine(void) interrupt 4
#endif
{
  if(RI == 1)             //如果接收标志位为1，接收到了数据
  {
    P2 = ~SBUF;           //读取数据，取反后输出到LED
    UART_SendByte(SBUF);  //将受到的数据发回串口
    RI = 0;               //接收标志位清0
  }
}
