/*
 * project   : https://github.com/Robin005cr/Custom_Protocol
 * file name : encode.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include<iostream>
#include "encode.hpp"
#include <format>
using namespace std;

void Encode::setOffset(int &data)
{
    data = data + 30;
}
string Encode::encodeString(int data)
{
    string hexStr = std::format("{:x}", data);

    cout << "Hex: " << hexStr << endl; // Output: ff
    startByte = "30";
    endByte = "50";
    messageLength = "02";
    result = startByte + messageLength + hexStr + endByte;
    return result;
}
string Encode::encodeFun(int &data)
{
    setOffset(data);

    return encodeString(data);
}