#include<iostream>
using namespace std;
int factorCount(int number)
{
    int counter=0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    cout<<"Enter a number: ";
    int number=0;
    cin>>number;
    cout<<"Number of factors: "<<factorCount(number)<<endl;
}