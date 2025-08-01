#ifndef __DS1302_H__
#define __DS1302_H__

//外部可调用时间数组，索引0~6分别为年、月、日、时、分、秒、星期，设置为有符号的便于<0的判断
extern char DS1302_Time[];

void DS1302_Init(void);
void DS1302_WriteByte(unsigned char Command,unsigned char Data);
unsigned char DS1302_ReadByte(unsigned char Command);
void DS1302_SetTime(void);
void DS1302_ReadTime(void);

#endif
