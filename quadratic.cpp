#include<iostream>
#include<cmath>
using namespace std;
void quadratic(int a, int b, int c, double &root1, double &root2)
{
    root1=((-b+sqrt(pow(b,2)-4*a*c))*1.0)/(2*a);
    root2=((-b-sqrt(pow(b,2)-4*a*c))*1.0)/(2*a);
}
int main()
{
    int a=0,b=0,c=0;
    double root1=0,root2=0;
    cout<<"a? ";
    cin>>a;
    cout<<"b? ";
    cin>>b;
    cout<<"c? ";
    cin>>c;
    quadratic(a,b,c,root1,root2);
}