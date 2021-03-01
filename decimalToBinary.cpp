#include<iostream>
using namespace std;
int decimalToBinary(int number)
{
    int binary=0,multiplier=1,remainder=0;
    while (number!=0)
    {
        remainder=number%2;
        binary+=multiplier*remainder;
        number/=2;
        multiplier*=10;
    }
    return binary;
}
int main()
{
    cout<<"Enter a decimal number: ";
    int number=0;
    cin>>number;
    cout<<"Binary number for "<<number<<" is "<<decimalToBinary(number)<<endl;
}