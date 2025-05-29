/*
 * project   : https://github.com/Robin005cr/Custom_Protocol
 * file name : main.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include <iostream>
#include<format>
#include "decode.hpp"
#include "encode.hpp"
#include "message_container.hpp"
using namespace std;

int main()
{
    
    
    int TemperatureData = 42;
    MessageCont obj;
    obj.value = TemperatureData;
    Encode Encoder;
    string EncodedData = Encoder.encodeFun(obj.value);
    
    cout << "encode(TemperatureData):"<< EncodedData;

    return 0;
}