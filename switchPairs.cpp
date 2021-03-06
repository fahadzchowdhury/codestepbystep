#include<iostream>
using namespace std;
void switchPairs(string a[], int length)
{
    for (int i = 1; i < length; i+=2)
    {
        string temp="";
        temp=a[i-1];
        a[i-1]=a[i];
        a[i]=temp;
    }
}