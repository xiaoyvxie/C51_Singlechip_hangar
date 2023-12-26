/*万能数码管库*/
/*2023/12/2*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/
/*目录可查找*/
//  ############################################
// ||-1、74HC595驱动共阴极数数码管---------------
// ||-2、74HC245+74HC138芯片驱动共阴极数码管-----
// ||-3、74HC138芯片驱动共阴极数码管-------------
// ||-4、直驱数码管------------------------------
// ||-5、数码管显示数的拆分----------------------
// ||-6、数码管动态显示（两个模式）---------------
//  #############################################

#include <STC89C5xRC.H> //头文件

/*74HC595驱动时使用*/
// #include "_74HC595.h"

#define Digital_pins P0 // 显示 p*0=A,...p*6=G,p*7=Op

sbit Digital_pins0 = P3^5; //A0
sbit Digital_pins1 = P3^6; //A1
sbit Digital_pins2 = P3^7; //A2

/*直驱使用引脚*/
// sbit Digital_pins3 = P2^3; //A3
// sbit Digital_pins4 = P2^4; //A4
// sbit Digital_pins5 = P2^5; //A5
// sbit Digital_pins6 = P2^6; //A6
// sbit Digital_pins7 = P2^6; //A7


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

// 数码管真值表
unsigned char Digitale[18]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71,0x00,0x80}; // 0=0,....9=9,10=A,...15=F,16= ,17=.

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 74HC595驱动共阴极数数码管
/// @param Digital_x 数码管显示位数
/// @param Digital_y 数码管显示数字或字母
// void Digital_reveal(unsigned char Digital_x  ,unsigned char Digital_y) 
// {
// 	unsigned char Digital_number0;
// 	unsigned char Digital_number1;
// 	switch (Digital_x)
// 	{
// 		case 1: Digital_number0 = ~0x01;	break;
// 		case 2: Digital_number0 = ~0x02;	break;
// 		case 3: Digital_number0 = ~0x04;	break;
// 		case 4: Digital_number0 = ~0x08;	break;
// 		case 5: Digital_number0 = ~0x10;	break;
// 		case 6: Digital_number0 = ~0x20;	break;
// 		case 7: Digital_number0 = ~0x40;	break;
// 		case 8: Digital_number0 = ~0x80;	break;					
// 	}
// 	Digital_number1 = Digitale[Digital_y];
// 	_74HC595_write_twobyte(Digital_number0,Digital_number1);
// }

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 74HC245+74HC138芯片驱动共阴极数码管
/// @param Digital_x 数码管显示位数
/// @param Digital_y 数码管显示数字或字母
// void Digital_reveal(unsigned char Digital_x  ,unsigned char Digital_y) 
// {
// 	switch (Digital_x)
// 	{
// 		case 8: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;break;
// 		case 7: Digital_pins0=0;Digital_pins1=1;Digital_pins2=1;break;
// 		case 6: Digital_pins0=1;Digital_pins1=0;Digital_pins2=1;break;
// 		case 5: Digital_pins0=0;Digital_pins1=0;Digital_pins2=1;break;
// 		case 4: Digital_pins0=1;Digital_pins1=1;Digital_pins2=0;break;
// 		case 3: Digital_pins0=0;Digital_pins1=1;Digital_pins2=0;break;
// 		case 2: Digital_pins0=1;Digital_pins1=0;Digital_pins2=0;break;
// 		case 1: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;break;						
// 	}
// 	Digital_pins = Digitale[Digital_y];
// }


// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 74HC138芯片驱动共阴极数码管
/// @param Digital_x 数码管显示位数
/// @param Digital_y 数码管显示数字或字母
// void Digital_reveal(unsigned char Digital_x  ,unsigned char Digital_y) 
// {
// 	switch (Digital_x)
// 	{
// 		case 8: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;break;
// 		case 7: Digital_pins0=0;Digital_pins1=1;Digital_pins2=1;break;
// 		case 6: Digital_pins0=1;Digital_pins1=0;Digital_pins2=1;break;
// 		case 5: Digital_pins0=0;Digital_pins1=0;Digital_pins2=1;break;
// 		case 4: Digital_pins0=1;Digital_pins1=1;Digital_pins2=0;break;
// 		case 3: Digital_pins0=0;Digital_pins1=1;Digital_pins2=0;break;
// 		case 2: Digital_pins0=1;Digital_pins1=0;Digital_pins2=0;break;
// 		case 1: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;break;						
// 	}
// 	Digital_pins = ~Digitale[Digital_y];
// }

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 直驱数码管
/// @param Digital_polarity 0为阴极，1为阳极
/// @param Digital_x 数码管显示位数
/// @param Digital_y 数码管显示数字或字母
// void Digital_reveal(bit Digital_polarity, unsigned char Digital_x, unsigned char Digital_y)
// {
// 	if (Digital_polarity == 0)
// 	{
// 		switch (Digital_x)
// 		{
// 			case 8: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;Digital_pins3=1;Digital_pins4=1;Digital_pins5=1;Digital_pins6=1;Digital_pins7=0;break;
// 			case 7: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;Digital_pins3=1;Digital_pins4=1;Digital_pins5=1;Digital_pins6=0;Digital_pins7=1;break;
// 			case 6: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;Digital_pins3=1;Digital_pins4=1;Digital_pins5=0;Digital_pins6=1;Digital_pins7=1;break;
// 			case 5: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;Digital_pins3=1;Digital_pins4=0;Digital_pins5=1;Digital_pins6=1;Digital_pins7=1;break;
// 			case 4: Digital_pins0=1;Digital_pins1=1;Digital_pins2=1;Digital_pins3=0;Digital_pins4=1;Digital_pins5=1;Digital_pins6=1;Digital_pins7=1;break;
// 			case 3: Digital_pins0=1;Digital_pins1=1;Digital_pins2=0;Digital_pins3=1;Digital_pins4=1;Digital_pins5=1;Digital_pins6=1;Digital_pins7=1;break;
// 			case 2: Digital_pins0=1;Digital_pins1=0;Digital_pins2=1;Digital_pins3=1;Digital_pins4=1;Digital_pins5=1;Digital_pins6=1;Digital_pins7=1;break;
// 			case 1: Digital_pins0=0;Digital_pins1=1;Digital_pins2=1;Digital_pins3=1;Digital_pins4=1;Digital_pins5=1;Digital_pins6=1;Digital_pins7=1;break;						
// 		}
// 		Digital_pins = ~Digitale[Digital_y];
// 	}
// 	if (Digital_polarity == 1)
// 	{
// 		switch (Digital_x)
// 		{
// 			case 8: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;Digital_pins3=0;Digital_pins4=0;Digital_pins5=0;Digital_pins6=0;Digital_pins7=1;break;
// 			case 7: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;Digital_pins3=0;Digital_pins4=0;Digital_pins5=0;Digital_pins6=1;Digital_pins7=0;break;
// 			case 6: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;Digital_pins3=0;Digital_pins4=0;Digital_pins5=1;Digital_pins6=0;Digital_pins7=0;break;
// 			case 5: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;Digital_pins3=0;Digital_pins4=1;Digital_pins5=0;Digital_pins6=0;Digital_pins7=0;break;
// 			case 4: Digital_pins0=0;Digital_pins1=0;Digital_pins2=0;Digital_pins3=1;Digital_pins4=0;Digital_pins5=0;Digital_pins6=0;Digital_pins7=0;break;
// 			case 3: Digital_pins0=0;Digital_pins1=0;Digital_pins2=1;Digital_pins3=0;Digital_pins4=0;Digital_pins5=0;Digital_pins6=0;Digital_pins7=0;break;
// 			case 2: Digital_pins0=0;Digital_pins1=1;Digital_pins2=0;Digital_pins3=0;Digital_pins4=0;Digital_pins5=0;Digital_pins6=0;Digital_pins7=0;break;
// 			case 1: Digital_pins0=1;Digital_pins1=0;Digital_pins2=0;Digital_pins3=0;Digital_pins4=0;Digital_pins5=0;Digital_pins6=0;Digital_pins7=0;break;						
// 		}
// 		Digital_pins = Digitale[Digital_y];
// 	}	
// }

// ######################################################################################################################################################################
// ######################################################################################################################################################################

// unsigned char Digital_array[8] ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}; // 数码管显示缓冲

/// @brief 数码管显示数的拆分
/// @param Digital_data 16位数 
// void Digital_data_processing(unsigned long Digital_data)
// {
//     Digital_array[0] = Digital_data % 10;
//     Digital_array[1] = Digital_data / 10 % 10;
//     Digital_array[2] = Digital_data / 100 % 10;
//     Digital_array[3] = Digital_data / 1000 % 10;
//     Digital_array[4] = Digital_data / 10000 % 10;
//     Digital_array[5] = Digital_data / 100000 % 10;
//     Digital_array[6] = Digital_data / 1000000 % 10;
//     Digital_array[7] = Digital_data / 10000000 % 10; 
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 数码管动态显示
/// @param  74HC138驱动芯片
// void Digital_dynamic(void)
// {   
// 	static unsigned char Digital_flushed_number;
// 	Digital_pins = 0x00;
//     switch (Digital_flushed_number)
//     {
//         case 0:Digital_74HC245_74HC138(8,Digital_array[0]);Digital_flushed_number++;break;
//         case 1:Digital_74HC245_74HC138(7,Digital_array[1]);Digital_flushed_number++;break;
//         case 2:Digital_74HC245_74HC138(6,Digital_array[2]);Digital_flushed_number++;break;
//         case 3:Digital_74HC245_74HC138(5,Digital_array[3]);Digital_flushed_number++;break;
//         case 4:Digital_74HC245_74HC138(4,Digital_array[4]);Digital_flushed_number++;break;
//         case 5:Digital_74HC245_74HC138(3,Digital_array[5]);Digital_flushed_number++;break;
//         case 6:Digital_74HC245_74HC138(2,Digital_array[6]);Digital_flushed_number++;break;
//         case 7:Digital_74HC245_74HC138(1,Digital_array[7]);Digital_flushed_number = 0;break;
//         default:break;
//     }
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------
 
/// @brief 数码管动态显示
/// @param 74HC595驱动芯片
// void Digital_dynamic(void)
// {   
// 	static unsigned char Digital_flushed_number;
//     switch (Digital_flushed_number)
//     {
//         case 0:Digital_two74HC595(8,Digital_array[0]);Digital_flushed_number++;break;
//         case 1:Digital_two74HC595(7,Digital_array[1]);Digital_flushed_number++;break;
//         case 2:Digital_two74HC595(6,Digital_array[2]);Digital_flushed_number++;break;
//         case 3:Digital_two74HC595(5,Digital_array[3]);Digital_flushed_number++;break;
//         case 4:Digital_two74HC595(4,Digital_array[4]);Digital_flushed_number++;break;
//         case 5:Digital_two74HC595(3,Digital_array[5]);Digital_flushed_number++;break;
//         case 6:Digital_two74HC595(2,Digital_array[6]);Digital_flushed_number++;break;
//         case 7:Digital_two74HC595(1,Digital_array[7]);Digital_flushed_number = 0;break;
//         default:break;
//     }
// }


//                                            ||
// |##########################################||####################################################################################################################################################
// |/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\||#################################################################################################################################################
// |\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/||###############################################################################################################################################
// |##########################################||********************************************************************************************************************************************
//                                            ||
