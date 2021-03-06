#include<iostream>
using namespace std;
float getPercentEven(int array[],int length)
{   
    if (length==0)
    {
        return 0;
    }
    
    float count=0.0;
    for (int i = 0; i < length; i++)
    {
        if (array[i]%2==0)
        {
            count++;
        }
    }
    return ((count/length)*100.0);
}
int main(void)
{
    int array[]={};
    cout<<"Percentage:"<<getPercentEven(array,0);
}