#include<iostream>
using namespace std;
void fibonacci(int max)
{
    cout<<"Fibonacci sequence up to "<<max<<":"<<endl;
    int num1=0,num2=1,sum=1;
    cout<<num1<<endl;
    while (sum<max)
    {
        cout<<sum<<endl;
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
}
int main(void)
{
    cout<<"Max? ";
    int max=0;
    cin>>max;
    fibonacci(max);
    return 0;  
}