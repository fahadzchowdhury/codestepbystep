#include<iostream>
using namespace std;
int sumOfDigits(int number)
{
    int sum=0;
    if (number<0)
    {
        number*=-1;
    }
    
    for (int i = 0; i < i+1; i++)
    {
        sum+=number%10;
        number/=10;
        if (number==0)
        {
            break;
        }
        
    }
    return sum;
}
int main()
{
    cout<<"Enter a number: ";
    int number=0;
    cin>>number;    
    cout<<"Sum of digits = "<<sumOfDigits(number)<<endl;
}