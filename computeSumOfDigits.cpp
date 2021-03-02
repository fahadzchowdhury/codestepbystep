#include<iostream>
using namespace std;
int main(void)
{
    cout<<"Type an integer: ";
    int num=0,sum=0;
    cin>>num;
    for (int i = 0; i < i+1; ++i)
    {
        sum+=num%10;
        num/=10;
        if (num==0)
        {
            break;
        }
        
    }
    cout<<"Digit sum is "<<sum<<endl;
    return 0;
}