#include<iostream>
using namespace std;
float averageOf3(int a, int b, int c)
{
    return (a+b+c)/3.0;
}
int main()
{
    int a=0,b=0,c=0;
    cout<<"Enter the integers: ";
    cin>>a>>b>>c;
    cout<<"average of 3: "<<averageOf3(a,b,c);
}