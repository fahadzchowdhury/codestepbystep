#include<iostream>
using namespace std;
int quadrant(float x, float y)
{
    int quadrant=0;
    if (x>0 && y>0)
    {
        quadrant=1;
    }
    else if (x>0 && y<0)
    {
        quadrant=4;
    }
    else if (x<0 && y>0)
    {
        quadrant=2;
    }
    else if (x<0 && y<0)
    {
        quadrant=3;
    }
    return quadrant;
}
int main(void)
{
    cout<<"x? ";
    float x=0,y=0;
    cin>>x;
    cout<<"y? ";
    cin>>y;
    cout<<"Quadrant: "<<quadrant()<<endl;
}