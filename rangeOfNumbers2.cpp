#include<iostream>
using namespace std;
int main()
{
    cout<<"Start? ";
    int a=0,b=0;
    cin>>a;
    cout<<"End? ";
    cin>>b;
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
    return 0;
}