#include<iostream>
using namespace std;
int main()
{
    int num=0,sum=0;
    while (1)
    {
        cout<<"Type a number: ";
        cin>>num;
        if (num==-1)
        {
            break;
        }
        sum+=num;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}