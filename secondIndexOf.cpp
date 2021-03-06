#include<iostream>
using namespace std;
int secondIndexOf(int list[], int size, int target)
{
    int index=-1,count=0;
    for (int i = 0; i < size; i++)
    {
        if (list[i]==target)
        {
            count++;
        }
        if (count==2)
        {
            index=i;
            break;
        }s
    }
    return index;
}