#include<iostream>
using namespace std;
int digitCount(int number)
{
    int counter=0;
    for (int i = 0; i < i+1; ++i)
    {
        number/=10;
        counter++;
        if (number==0)
        {
            break;
        }
    }
    return counter;
}
int main()
{
    cout<<"Enter a number: ";
    int number=0;
    cin>>number;
    cout<<"No. of digits: "<<digitCount(number)<<endl;
}