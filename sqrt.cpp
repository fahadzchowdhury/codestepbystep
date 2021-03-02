#include<iostream>
using namespace std;
int sqrt(int x)
int sqrt(int x)
{
    int i=0;
    for (i = 0; i*i <= x; i++)
    {
        
    }
    return i-1;
}
int main(void)
{
    int x=0;
    cout<<"Number? ";
    cin>>x;
    cout<<"Square root of "<<x<<" is "<<sqrt(x)<<endl;
}