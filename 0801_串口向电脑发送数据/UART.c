#include <REGX52.H>

/**
  * @brief  串口初始化，4800bps@12.000MHz
  * @param  无
  * @retval 无
  */
void UART_Init(void)
{
#if 0
  SCON=0x40;
  PCON |= 0x80;
  TMOD &= 0x0F;   //设置定时器模式
  TMOD |= 0x20;   //设置定时器模式
  TL1 = 0xF3;     //设定定时初值
  TH1 = 0xF3;     //设定定时器重装值
  ET1 = 0;        //禁止定时器1中断
  TR1 = 1;        //启动定时器1
  //
#else
  SCON = 0x50;    //8位数据,可变波特率
  //AUXR |= 0x40; //定时器1时钟为Fosc,即1T
  //AUXR &= 0xFE; //串口1选择定时器1为波特率发生器
  TMOD &= 0x0F;   //设定定时器1为16位自动重装方式
  TL1 = 0xE0;     //设定定时初值
  TH1 = 0xFE;     //设定定时初值
  ET1 = 0;        //禁止定时器1中断
  TR1 = 1;        //启动定时器1
#endif
}

/**
  * @brief  串口发送一个字节数据
  * @param  Byte 要发送的一个字节数据
  * @retval 无
  */
void UART_SendByte(unsigned char Byte)
{
  SBUF = Byte;
  while(TI == 0);
  TI=0;
}
