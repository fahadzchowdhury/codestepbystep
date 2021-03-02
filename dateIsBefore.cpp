#include<iostream>
using namespace std;
bool dateIsBefore(int month1, int date1, int month2, int date2)
{   
    bool ans=false;
    if (month1<month2)
    {
        ans=true;
    }
    else if (month1==month2)
    {
        if (date1<date2)
        {
            ans=true;
        }
        
    }
    return ans;
}
int main()
{
    int month1=0,month2=0,date1=0,date2=0;
    cout<<dateIsBefore(month1,date1,month2,date2);<<endl;
}