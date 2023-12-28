/*74HC595库*/
/*2023/12/20*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/
/*目录可查找*/
//  ############################################
// ||-1、74HC595初始化---------------------------
// ||-2、74HC595一个字节输入(分正反输入)----------
// ||-3、74HC595两个字节输入(分正反输入)----------
// ||-4、74HC595四个字节输入(分正反输入)----------
//  #############################################


#include <STC89C5xRC.H>

sbit RC = P3^5; // 上升沿锁存
sbit SC = P3^6; // 上升沿移位
sbit SE = P3^4; // 存数

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595初始化
/// @param  无
void _74HC595_initialize(void)
{
    SE = 0;
    SC = 0;
    RC = 0;
}


// ##############################################################################################################################################


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595一个字节输入
/// @param _74HC595_number_onebyte 正向一个字节 
// void _74HC595_write_onebyte(unsigned char _74HC595_number_onebyte)
// {
//     unsigned char _74HC595_number_i;
//     for (_74HC595_number_i = 0; _74HC595_number_i < 8; _74HC595_number_i++)
//     {
//         SE = _74HC595_number_onebyte & (0x80>>_74HC595_number_i);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595两个字节输入
/// @param _74HC595_number1_twobyte 正向第一个字节
/// @param _74HC595_number2_twobyte 正向第二个字节
// void _74HC595_write_twobyte(unsigned char _74HC595_number1_twobyte , unsigned char _74HC595_number2_twobyte)
// {
//     unsigned char _74HC595_number0_m;
//     unsigned char _74HC595_number1_m;
//     for (_74HC595_number0_m = 0; _74HC595_number0_m < 8; _74HC595_number0_m++)
//     {
//         SE = _74HC595_number2_twobyte & (0x80>>_74HC595_number0_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number1_m = 0; _74HC595_number1_m < 8; _74HC595_number1_m++)
//     {
//         SE = _74HC595_number1_twobyte & (0x80>>_74HC595_number1_m);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595四个字节输入
/// @param _74HC595_number1_fourbyte 正向第一个字节
/// @param _74HC595_number2_fourbyte 正向第二个字节
/// @param _74HC595_number3_fourbyte 正向第三个字节
/// @param _74HC595_number4_fourbyte 正向第四个字节
// void _74HC595_write_fourbyte(unsigned char _74HC595_number1_fourbyte , unsigned char _74HC595_number2_fourbyte , unsigned char _74HC595_number3_fourbyte , unsigned char _74HC595_number4_fourbyte)
// {
//     unsigned char _74HC595_number0_m;
//     unsigned char _74HC595_number1_m;
//     unsigned char _74HC595_number2_m;
//     unsigned char _74HC595_number3_m;
//     for (_74HC595_number3_m = 0; _74HC595_number3_m < 8; _74HC595_number3_m++)
//     {
//         SE = _74HC595_number4_fourbyte & (0x80 >>_74HC595_number3_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number2_m = 0; _74HC595_number2_m < 8; _74HC595_number2_m++)
//     {
//         SE = _74HC595_number3_fourbyte & (0x80 >>_74HC595_number2_m);
//         SC = 1;
//         SC = 0;    
//     }
//    for (_74HC595_number1_m = 0; _74HC595_number1_m < 8; _74HC595_number1_m++)
//     {
//         SE = _74HC595_number2_fourbyte & (0x80 >>_74HC595_number1_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number0_m = 0; _74HC595_number0_m < 8; _74HC595_number0_m++)
//     {
//         SE = _74HC595_number1_fourbyte & (0x80 >>_74HC595_number0_m);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }


// ##############################################################################################################################################
// ##############################################################################################################################################


/// @brief 74HC595一个字节输入
/// @param _74HC595_number_onebyte 反向一个字节
// void _74HC595_write_onebyte(unsigned char _74HC595_number_onebyte)
// {
//     unsigned char _74HC595_number_i;
//     for (_74HC595_number_i = 0; _74HC595_number_i < 8; _74HC595_number_i++)
//     {
//         SE = _74HC595_number_onebyte & (0x01<<_74HC595_number_i);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595两个字节输入
/// @param _74HC595_number1_twobyte 反向第一个字节
/// @param _74HC595_number2_twobyte 反向第二个字节
// void _74HC595_write_twobyte(unsigned char _74HC595_number1_twobyte , unsigned char _74HC595_number2_twobyte)
// {
//     unsigned char _74HC595_number0_m;
//     unsigned char _74HC595_number1_m;
//     for (_74HC595_number0_m = 0; _74HC595_number0_m < 8; _74HC595_number0_m++)
//     {
//         SE = _74HC595_number2_twobyte & (0x01<<_74HC595_number0_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number1_m = 0; _74HC595_number1_m < 8; _74HC595_number1_m++)
//     {
//         SE = _74HC595_number1_twobyte & (0x01<<_74HC595_number1_m);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }


// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/// @brief 74HC595四个字节输入
/// @param _74HC595_number1_fourbyte 反向一个字节
/// @param _74HC595_number2_fourbyte 反向二个字节
/// @param _74HC595_number3_fourbyte 反向三个字节
/// @param _74HC595_number4_fourbyte 反向四个字节
// void _74HC595_write_fourbyte(unsigned char _74HC595_number1_fourbyte , unsigned char _74HC595_number2_fourbyte , unsigned char _74HC595_number3_fourbyte , unsigned char _74HC595_number4_fourbyte)
// {
//     unsigned char _74HC595_number0_m;
//     unsigned char _74HC595_number1_m;
//     unsigned char _74HC595_number2_m;
//     unsigned char _74HC595_number3_m;
//     for (_74HC595_number3_m = 0; _74HC595_number3_m < 8; _74HC595_number3_m++)
//     {
//         SE = _74HC595_number4_fourbyte & (0x01<<_74HC595_number3_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number2_m = 0; _74HC595_number2_m < 8; _74HC595_number2_m++)
//     {
//         SE = _74HC595_number3_fourbyte & (0x01<<_74HC595_number2_m);
//         SC = 1;
//         SC = 0;    
//     }
//    for (_74HC595_number1_m = 0; _74HC595_number1_m < 8; _74HC595_number1_m++)
//     {
//         SE = _74HC595_number2_fourbyte & (0x01<<_74HC595_number1_m);
//         SC = 1;
//         SC = 0;    
//     }
//     for (_74HC595_number0_m = 0; _74HC595_number0_m < 8; _74HC595_number0_m++)
//     {
//         SE = _74HC595_number1_fourbyte & (0x01<<_74HC595_number0_m);
//         SC = 1;
//         SC = 0;    
//     }
//     RC = 1;
//     RC = 0;
// }




//                                            ||
// |##########################################||####################################################################################################################################################
// |/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\||#################################################################################################################################################
// |\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/||###############################################################################################################################################
// |##########################################||********************************************************************************************************************************************
//                                            ||
