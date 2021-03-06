#include<iostream>
using namespace std;
bool sorted(double list[], int length)
{
    for (int i = 1; i < length; i++)
    {
        if (list[i]<list[i-1])
        {
            return false;
        }
    }
    return true;
}