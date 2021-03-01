#include<iostream>
using namespace std;
int daysInMonth(int month);
int main()
{
    int month;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Number of days: "<<daysInMonth(month)<<endl;
}
int daysInMonth(int month)
{
    if (month==1 || month==3 || month== 5 || month==7 || month==8 || month==10 || month==12)
    {
        return 31;
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        return 30;
    }
    else
    {
        return 28;
    }
}