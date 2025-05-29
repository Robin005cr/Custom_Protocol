/*
 * project   : https://github.com/Robin005cr/Custom_Protocol
 * file name : encode.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#pragma once
#include <string>
using namespace std;
class Encode
{
private:
    string startByte, endByte, messageLength, result;

public:
    void setOffset(int &data);
    string encodeString(int data);
    string encodeFun(int &data);
};
