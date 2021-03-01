#include<iostream>
using namespace std;
int main()
{
    cout<<"Number of numbers? ";
    int n=0,max=0,min=0;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Number "<<i+1<<": ";
        cin>>array[i];
        if(i==0)
        {
            max=array[i];
            min=array[i];
        }
        if (max<array[i])
        {
            max=array[i];
        }
        if (min>array[i])
        {
            min=array[i];
        }
    }
    cout<<"Biggest = "<<max<<endl;
    cout<<"Smallest = "<<min<<endl;
}