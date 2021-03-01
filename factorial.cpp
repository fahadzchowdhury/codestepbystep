#include<iostream>
using namespace std;
int factorial(int number)
{
    int answer=1;
    if(number!=0 || number!= 1)
    {
        for (int i = number; i > 1; --i)
        {
            answer*=i;
        }
    }
    return answer;
}
int main()
{
    cout<<"Enter a number to find its factorial: ";
    int number;
    cin>>number;
    cout<<number<<"! = "<<factorial(number)<<endl;
}