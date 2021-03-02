#include<iostream>
using namespace std;
void mystery(int c, int& a, int b)
{
    cout<<b<<" + "<<c<<" = "<<a<<endl;
    a++;
    b--;
}
int main()
{
    int a=4,b=7,c=-2;
    mystery(b,a,c);
    mystery(c,b,3);
    mystery(b,c,b+a);
    return 0;
}
/*
    output
    -2 + 7 = 4
    3 + -2 = 7
    13 + 8 = -2
*/