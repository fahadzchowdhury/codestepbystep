#include<iostream>
#include<cmath>
using namespace std;
float circleArea(float radius)
{
    float area=0;
    area=M_PI*pow(radius,2);
    return area;
}
int main(void)
{
    float radius=0;
    cout<<"Radius? ";
    cin>>radius;
    cout<<"Area = "<<circleArea(radius)<<endl;
}