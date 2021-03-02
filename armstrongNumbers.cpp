#include<iostream>
#include<cmath>
using namespace std;
void armstrongNumbers(int number)
{
    int multiplier=10,n=pow(10,number);
    if(number>0)
    {
        if(number==1)
        {
            cout<<"0 ";
        }
        for (int i = n/10; i < n; i++)
        {
            int sum=0,num=i;
            for (int j = 0; j < number; ++j)
            {
                sum+=pow(num%10,number);
                num/=10;
            }
            if (sum==i)
            {
                cout<<i<<" ";
            }        
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"n? ";
    int n;
    cin>>n;
    armstrongNumbers(n);
}