#include<iostream>
using namespace std;
int loopMysteryExam1(int i,int j)
{
    while (i!=0 && j!=0)
    {
        i=i/j;
        j=(j-1)/2;
        cout<<i<<" "<<j<<" ";
    }
    cout<<i<<endl;
    return i+j;
}
int main()
{
    cout<<"i? ";
    int i=0,j=0;
    cin>>i;
    cout<<"j? ";
    cin>>j;
    cout<<loopMysteryExam1(i,j)<<endl;
}
/*
OUTPUT
5
5
1 0 1
1
3 2 1 0 1
1
8 4 2 1 2 0 2 
2
40 19 2 9 0 4 0
4
*/