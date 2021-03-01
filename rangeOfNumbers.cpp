#include<iostream>
using namespace std;
void rangeOfNumbers(int a , int b)
{
    if (b>a)
    {
        for (int i = a; i <= b; ++i)
        {
            if (i<b)
            {
                cout<<i<<", ";
            }
            else
            {
                cout<<i<<endl;
            }
        }
    }
    else if (b<a)
    {
        for (int i = a; i >= b; --i)
        {
            if (i>b)
            {
                cout<<i<<", ";
            }
            else
            {
                cout<<i<<endl;    
            }
        }
    }
    else
    {
        cout<<a<<endl;
    }
}
int main()
{
    cout<<"First number? ";
    int a=0,b=0;
    cin>>a;
    cout<<"Second number? ";
    cin>>b;
    rangeOfNumbers(a,b);
}