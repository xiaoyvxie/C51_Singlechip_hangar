/*按钮库*/
/*2023/12/25*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/
/*目录可查找*/
//  #############################################
// ||-1、矩阵按键--------------------------------
// ||-2、独立按键--------------------------------
//  #############################################

#include <REGX52.H>    // 头文件
#include "Delay.h"     // 延时函数


/*矩阵按钮引脚定义*/
// #define Matrix_key_pin_set P2
// sbit Matrix_key_pin1 = P2^0;
// sbit Matrix_key_pin2 = P2^1;
// sbit Matrix_key_pin3 = P2^2;
// sbit Matrix_key_pin4 = P2^3;
// sbit Matrix_key_pin5 = P2^4;
// sbit Matrix_key_pin6 = P2^5;
// sbit Matrix_key_pin7 = P2^6;
// sbit Matrix_key_pin8 = P2^7;

/// @brief 矩阵按键
/// @return 数“1、2、3、4、5、6、7、8、9、10、11、12、13、14、15、16”
// unsigned char Matrix_key()
// {
// 	unsigned char Matrix_key_Number; 
// 	Matrix_key_pin_set = 0xFF;
// 	Matrix_key_pin1 = 0;
// 	if ( Matrix_key_pin5 == 0 ) { Delay_ms(15); while ( Matrix_key_pin5 == 0 ); Delay_ms(15); Matrix_key_Number = 1; }
// 	if ( Matrix_key_pin6 == 0 ) { Delay_ms(15); while ( Matrix_key_pin6 == 0 ); Delay_ms(15); Matrix_key_Number = 2; }
// 	if ( Matrix_key_pin7 == 0 ) { Delay_ms(15); while ( Matrix_key_pin7 == 0 ); Delay_ms(15); Matrix_key_Number = 3; }
// 	if ( Matrix_key_pin8 == 0 ) { Delay_ms(15); while ( Matrix_key_pin8 == 0 ); Delay_ms(15); Matrix_key_Number = 4; }
// 	Matrix_key_pin_set = 0xFF;
// 	Matrix_key_pin2 = 0;
// 	if ( Matrix_key_pin5 == 0 ) { Delay_ms(15); while ( Matrix_key_pin5 == 0 ); Delay_ms(15); Matrix_key_Number = 5; }
// 	if ( Matrix_key_pin6 == 0 ) { Delay_ms(15); while ( Matrix_key_pin6 == 0 ); Delay_ms(15); Matrix_key_Number = 6; }
// 	if ( Matrix_key_pin7 == 0 ) { Delay_ms(15); while ( Matrix_key_pin7 == 0 ); Delay_ms(15); Matrix_key_Number = 7; }
// 	if ( Matrix_key_pin8 == 0 ) { Delay_ms(15); while ( Matrix_key_pin8 == 0 ); Delay_ms(15); Matrix_key_Number = 8; }
// 	Matrix_key_pin_set = 0xFF;
// 	Matrix_key_pin3 = 0;
// 	if ( Matrix_key_pin5 == 0 ) { Delay_ms(15); while ( Matrix_key_pin5 == 0 ); Delay_ms(15); Matrix_key_Number = 9; }
// 	if ( Matrix_key_pin6 == 0 ) { Delay_ms(15); while ( Matrix_key_pin6 == 0 ); Delay_ms(15); Matrix_key_Number = 10; }
// 	if ( Matrix_key_pin7 == 0 ) { Delay_ms(15); while ( Matrix_key_pin7 == 0 ); Delay_ms(15); Matrix_key_Number = 11; }
// 	if ( Matrix_key_pin8 == 0 ) { Delay_ms(15); while ( Matrix_key_pin8 == 0 ); Delay_ms(15); Matrix_key_Number = 12; }
// 	Matrix_key_pin_set = 0xFF;
// 	Matrix_key_pin4 = 0;
// 	if ( Matrix_key_pin5 == 0 ) { Delay_ms(15); while ( Matrix_key_pin5 == 0 ); Delay_ms(15); Matrix_key_Number = 13; }
// 	if ( Matrix_key_pin6 == 0 ) { Delay_ms(15); while ( Matrix_key_pin6 == 0 ); Delay_ms(15); Matrix_key_Number = 14; }
// 	if ( Matrix_key_pin7 == 0 ) { Delay_ms(15); while ( Matrix_key_pin7 == 0 ); Delay_ms(15); Matrix_key_Number = 15; }
// 	if ( Matrix_key_pin8 == 0 ) { Delay_ms(15); while ( Matrix_key_pin8 == 0 ); Delay_ms(15); Matrix_key_Number = 16; }
// 	return Matrix_key_Number;	
// }


// #################################################################################################################################################################################

/*独立按钮引脚定义*/
// sbit Individual_key_pin1 = P2^0; // k1
// sbit Individual_key_pin2 = P2^1; // k2
// sbit Individual_key_pin3 = P2^2; // k3
// sbit Individual_key_pin4 = P2^3; // k4
// sbit Individual_key_pin5 = P2^4; // k5
// sbit Individual_key_pin6 = P2^5; // k6
// sbit Individual_key_pin7 = P2^6; // k7
// sbit Individual_key_pin8 = P2^7; // k8

/// @brief 独立按键
/// @return 数“1、2、3、4、5、6、7、8”
// unsigned char Individual_key()
// {
// 	unsigned char Individual_key_Number;
// 	if ( Individual_key_pin1 == 0 ) { Delay_ms(15); while ( Individual_key_pin1 == 0 ); Delay_ms(15); Individual_key_Number = 1; }
// 	if ( Individual_key_pin2 == 0 ) { Delay_ms(15); while ( Individual_key_pin2 == 0 ); Delay_ms(15); Individual_key_Number = 2; }
// 	if ( Individual_key_pin3 == 0 ) { Delay_ms(15); while ( Individual_key_pin3 == 0 ); Delay_ms(15); Individual_key_Number = 3; }
// 	if ( Individual_key_pin4 == 0 ) { Delay_ms(15); while ( Individual_key_pin4 == 0 ); Delay_ms(15); Individual_key_Number = 4; }
// 	if ( Individual_key_pin5 == 0 ) { Delay_ms(15); while ( Individual_key_pin5 == 0 ); Delay_ms(15); Individual_key_Number = 5; }
// 	if ( Individual_key_pin6 == 0 ) { Delay_ms(15); while ( Individual_key_pin6 == 0 ); Delay_ms(15); Individual_key_Number = 6; }
// 	if ( Individual_key_pin7 == 0 ) { Delay_ms(15); while ( Individual_key_pin7 == 0 ); Delay_ms(15); Individual_key_Number = 7; }
// 	if ( Individual_key_pin8 == 0 ) { Delay_ms(15); while ( Individual_key_pin8 == 0 ); Delay_ms(15); Individual_key_Number = 8; }
// 	return Individual_key_Number;	
// }

