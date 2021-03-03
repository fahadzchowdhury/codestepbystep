#include<iostream>
#include<cmath>
using namespace std;
float computeDistance(int x1,int y1, int x2, int y2)
{
    float d=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
    return d;
}
int main()
{
    int x1=0,x2=0,y1=0,y2=0;
    cout<<"x1? ";
    cin>>x1;
    cout<<"x2? ";
    cin>>x2;
    cout<<"y1? ";
    cin>>y1;
    cout<<"y2? ";
    cin>>y2;
    cout<<"Distance = "<<computeDistance(x1,y1,x2,y2)<<endl;
}