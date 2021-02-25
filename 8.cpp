#include<iostream>
using namespace std;
int main()
{
    int sum=0,count=0;
    for (int i = 0; i < i+1; ++i)
    {
        int n=0;
        cout<<"Integer? ";
        cin>>n;
        if (n%2==0 && n!=0)
        {
            sum+=n;
            count++;
        }
        if (n==0)
        {
            break;
        }
    }
    cout<<"Average: "<<sum/(count*1.0)<<endl;
}