#include<iostream>
using namespace std;
bool isMultiple(int a, int b)
{
    if (a%b==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<"a? ";
    int a=0,b=0;
    cin>>a;
    cout<<"b? ";
    cin>>b;
    isMultiple(a,b);
}