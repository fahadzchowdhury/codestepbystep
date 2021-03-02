#include<iostream>
using namespace std;
float computeTax(float salary)
{
    float tax=0;
    if (salary>70350)
    {
        tax=14325+0.28*(salary-70350);
    }
    else if (salary>29050)
    {
        tax=4000+0.25*(salary-29050);
    }
    else if (salary>7150)
    {
        tax=715+0.15*(salary-7150);
    }
    else
    {
        tax=0.10*salary;
    }
    return tax;
}
int main()
{
    cout<<"Enter your salary: ";
    float salary;
    cin>>salary;
    cout<<"Your tax is = "<<computeTax(salary)<<endl;
}