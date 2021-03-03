#include<iostream>
using namespace std;
bool isPrimeNumber(int a)
{
    bool prime=true;
    if (a<2)
    {
        prime=false;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a%i==0)
            {
                prime=false;
                break;
            }
        }
    }
    return prime;
}