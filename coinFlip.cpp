#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void coinFlip(int number, char coin)
{
    int counter=1;
    char side='A',sideBefore='B';
    if (number<0 || (coin!='H' && coin!='T'))
    {
        cout<<"ERROR!"<<endl;
    }
    else if (number==0)
    {
        cout<<"You got "<<coin<<" 0 times in a row!"<<endl;
    }
    else
    {
    for (int i = 0; i < i+1; i++)
    {
        if (rand()%2==0)
        {
            cout<<"H ";
            if (side=='H')
            {
                counter++;
            }
            side='H';
        }
        else
        {
            cout<<"T ";
            if (side=='T')
            {
                counter++;
            }
            side='T';
        }
        if (sideBefore!=side && i!=1)
        {
            counter=1;
        }
        sideBefore=side;
        if (counter==number && side==coin)
        {
            break;
        }
        
    }
    cout<<endl;
    cout<<"You got "<<coin<<" "<<number<<" times in a row!"<<endl;
    }
}
int main()
{
    cout<<"Number? ";
    int number=0;
    char coin='T';
    cin>>number;
    cout<<"Character? ";
    cin>>coin;
    
    coinFlip(number,coin);
}