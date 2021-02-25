#include<iostream>
#include<cmath>
using namespace std;
float calculateBMI(float height, float weight);
void classCheck(float bmi);
void bmiDifference(float bmi1, float bmi2);
int main(void)
{
    float bmi1=0,bmi2=0,height=0,weight=0;
    cout<<"This program reads data for two people\nand computes their body mass index (BMI). \n"<<endl;
    cout<<"Enter Person 1's information: "<<endl;
    cout<<"height (in inches)? ";
    cin>>height;
    cout<<"weight (in pounds)? ";
    cin>>weight;
    bmi1= calculateBMI(height,weight);
    classCheck(bmi1);
    cout<<"Enter Person 2's information: "<<endl;
    cout<<"height (in inches)? ";
    cin>>height;
    cout<<"weight (in pounds)? ";
    cin>>weight;
    bmi2= calculateBMI(height,weight);
    classCheck(bmi2);
    bmiDifference(bmi1,bmi2);
}
float calculateBMI(float height, float weight)
{
    float bmi=0;
    bmi=(weight/pow(height,2))*703;
    return bmi;
}
void classCheck(float bmi)
{
    if (bmi<18.5)
    {
        cout<<"BMI = "<<bmi<<", class 1"<<endl<<endl;
    }
    if (bmi>=30.0)
    {
        cout<<"BMI = "<<bmi<<", class 4"<<endl<<endl;
    }
    else if (bmi>=25.0)
    {
        cout<<"BMI = "<<bmi<<", class 3"<<endl<<endl;
    }
    else if (bmi>=18.5)
    {
        cout<<"BMI = "<<bmi<<", class 2"<<endl<<endl;
    }
}
void bmiDifference(float bmi1,float bmi2)
{
    cout<<"BMI difference = "<<abs(bmi1-bmi2)<<endl;
}