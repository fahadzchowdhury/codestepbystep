#include<iostream>
#include<iomanip>
using namespace std;
void printPay(float pay, int hours)
{
    float sum=0;
    for (int i = 1; i <= hours; i++)
    {
        if (i>8)
        {
            sum+=1.5*pay;
        }
        else
        {
            sum+=pay;
        }
    }
    cout<<"Hours worked: "<<hours<<endl;
    cout<<"Pay earned: $"<<fixed<<setprecision(2)<<sum<<endl;
}