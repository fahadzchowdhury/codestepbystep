#include<iostream>
using namespace std;
void showTwos(int number)
{
    int n=number;
    cout<<n<<" = ";
    while (1)
    {
        if (n%2==0)
        {
            cout<<"2 * ";
            n/=2;
        }
        else
        {
            cout<<n<<endl;
            break;
        }
    }
}
int main()
{
    cout<<"Integer? ";
    int number;
    cin>>number;
    showTwos(number);
}