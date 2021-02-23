#include<iostream>
using namespace std;
void evenSum()
{
    cout<<"how many integers? ";
    int n=0,sum=0,max=0;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        cout<<"next integer? ";
        cin>>array[i];
        if (array[i]%2==0)
        {
            sum+=array[i];
            if (array[i]>max)
            {
                max=array[i];
            }
        }
    }
    cout<<"even sum = "<<sum<<endl;
    cout<<"even max = "<<max<<endl;
}
int main()
{
    evenSum();
}