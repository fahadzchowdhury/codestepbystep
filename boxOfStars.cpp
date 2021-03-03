#include<iostream>
using namespace std;
void boxOfStars(int width, int height)
{
    for (int i = 1; i <= height; ++i)
    {
        if (i==1 || i==height)
        {
            for (int j = 0; j < width; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for(int j=1; j<= width; j++)
            {
                if (j==1 || j==width)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        } 
    }
}
int main()
{
    cout<<"width? ";
    int width=0,height=0;
    cin>>width;
    cout<<"height? ";
    cin>>height;
    boxOfStars(width,height);
}