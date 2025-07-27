######################################################################
# @author      : yetist (yetist@gmail.com)
# @file        : Makefile
# @created     : 星期六 7月 26, 2025 18:22:22 CST
######################################################################

all:
	make -C 0201_点亮一个LED
	make -C 0202_LED闪烁
	make -C 0203_LED流水灯
	make -C 0204_LED流水灯Plus
	make -C 0301_独立按键控制LED亮灭
	make -C 0302_独立按键控制LED状态
	make -C 0303_独立按键控制LED显示二进制
	make -C 0304_独立按键控制LED移位
	make -C 0401_静态数码管显示
	make -C 0402_动态数码管显示
	make -C 0501_模块化编程
	make -C 0502_LCD1602调试工具
	make -C 0601_矩阵键盘
	make -C 0602_矩阵键盘密码锁
	make -C 0701_按键控制LED流水灯模式
	make -C 0702_定时器时钟
	make -C 0801_串口向电脑发送数据
	make -C 0802_电脑通过串口控制LED
	make -C 0901_LED点阵屏显示图形
	make -C 0902_LED点阵屏显示动画
	make -C 1001_DS1302时钟
	make -C 1002_DS1302可调时钟
	make -C 1101_蜂鸣器播放提示音
	make -C 1102_蜂鸣器播放音乐
	make -C 1201_AT24C02数据存储
	make -C 1202_秒表_定时器扫描按键数码管
	make -C 1301_DS18B20温度读取
	make -C 1302_DS18B20温度报警器
	make -C 1401_LCD1602液晶显示屏
	make -C 1501_LED呼吸灯
	make -C 1502_直流电机调速
	make -C 1601_AD模数转换
	make -C 1602_DA数模转换
	make -C 1701_红外遥控
	make -C 1701_红外遥控_11.0592MHz晶振
	make -C 1702_红外遥控电机调速
	make -C 1702_红外遥控电机调速_11.0592MHz晶振
	make -C 2001_STC89C52_TX_RX指示灯交替闪烁

clean:
	make -C 0201_点亮一个LED clean
	make -C 0202_LED闪烁 clean
	make -C 0203_LED流水灯 clean
	make -C 0204_LED流水灯Plus clean
	make -C 0301_独立按键控制LED亮灭 clean
	make -C 0302_独立按键控制LED状态 clean
	make -C 0303_独立按键控制LED显示二进制 clean
	make -C 0304_独立按键控制LED移位 clean
	make -C 0401_静态数码管显示 clean
	make -C 0402_动态数码管显示 clean
	make -C 0501_模块化编程 clean
	make -C 0502_LCD1602调试工具 clean
	make -C 0601_矩阵键盘 clean
	make -C 0602_矩阵键盘密码锁 clean
	make -C 0701_按键控制LED流水灯模式 clean
	make -C 0702_定时器时钟 clean
	make -C 0801_串口向电脑发送数据 clean
	make -C 0802_电脑通过串口控制LED clean
	make -C 0901_LED点阵屏显示图形 clean
	make -C 0902_LED点阵屏显示动画 clean
	make -C 1001_DS1302时钟 clean
	make -C 1002_DS1302可调时钟 clean
	make -C 1101_蜂鸣器播放提示音 clean
	make -C 1102_蜂鸣器播放音乐 clean
	make -C 1201_AT24C02数据存储 clean
	make -C 1202_秒表_定时器扫描按键数码管 clean
	make -C 1301_DS18B20温度读取 clean
	make -C 1302_DS18B20温度报警器 clean
	make -C 1401_LCD1602液晶显示屏 clean
	make -C 1501_LED呼吸灯 clean
	make -C 1502_直流电机调速 clean
	make -C 1601_AD模数转换 clean
	make -C 1602_DA数模转换 clean
	make -C 1701_红外遥控 clean
	make -C 1701_红外遥控_11.0592MHz晶振 clean
	make -C 1702_红外遥控电机调速 clean
	make -C 1702_红外遥控电机调速_11.0592MHz晶振 clean
	make -C 2001_STC89C52_TX_RX指示灯交替闪烁 clean
