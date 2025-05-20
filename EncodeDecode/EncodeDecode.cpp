#include <iostream>
#include<format>
using namespace std;

void setOffset(int& data)
{
    data = data + 30;
}
string encodeString(int data)
{
    string hexStr = std::format("{:x}", data);

    cout << "Hex: " << hexStr << endl;  // Output: ff

    string startByte = "30";
    string endByte = "50";
    string messageLength = "02";
    string result = startByte + messageLength + hexStr + endByte;
    return result;
}
string encode(int& data)
{
    setOffset(data);


    return encodeString(data);;

}
int main()
{
    int TemperatureData = 42;
    cout << "encode(TemperatureData):" << encode(TemperatureData);

    return 0;
}