#include<iostream>
using namespace std;
void fitnessGoal(int goal)
{
    int min_1=0,min_2=0,counter=0;
    cout<<"Train until you increase for "<<goal<<" days."<<endl;
    for (int i = 1; i <= goal; ++i)
    {
        cout<<"Minutes? ";
        cin>>min_2;
        if (min_2>min_1)
        {
            cout<<"Great job!"<<endl;
        }
        else
        {
            cout<<"Start over."<<endl;
            i=0;
        }
        min_1=min_2;
        counter++;
    }
    cout<<"Reached your goal in "<<counter<<" total days!"<<endl;
}
int main()
{
    cout<<"Enter the number of days you want to train for: ";
    int goal=0;
    cin>>goal;
    fitnessGoal(goal);
}