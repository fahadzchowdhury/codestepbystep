#include<iostream>
using namespace std;
void numberSquare(int min , int max);
int main()
{
    int min=0,max=0;
    cout<<"Min? ";
    cin>>min;
    cout<<"Max? ";
    cin>>max;
    for (int i = min; i <= max; ++i)
    {
        int counter=i;
        for (int j = min; j <= max; ++j)
        {
            if (counter>max)
            {
                counter=min;
            }
            cout<<counter;
            counter++;         
        }
        cout<<endl;
    }
    return 0;    
}