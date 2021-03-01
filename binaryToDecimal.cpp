#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int binary)
{
    int decimal=0;
    for (int i = 0; binary!=0; ++i)
    {
        if (binary%10==1)
        {
            decimal+=pow(2,i);   
        }
        binary/=10;
    }
    return decimal;
}
int main()
{
    cout<<"Enter a binary number: ";
    int binary=0;
    cin>>binary;
    cout<<"Decimal of "<<binary<<" is "<<binaryToDecimal(binary)<<endl;
}