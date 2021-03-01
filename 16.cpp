#include<iostream>
#include<iomanip>
using namespace std;
float homework(float hw_m);
float midterm(float mid_m);
float finals(float final_m);
void askGrade(float final_m,float homework_marks, float mid_marks);
int main(void)
{
    float hw_m=0,mid_m=0,final_m=0;
    cout<<"This program reads your scores on homeword\nand exams and reports your course grade or\nwhat score you need on that const exam.\n"<<endl;
    cout<<"Exam weights? ";
    cin>>mid_m>>final_m;
    hw_m=100-mid_m-final_m;
    float homework_marks=homework(hw_m);
    cout<<endl;
    float mid_marks=midterm(mid_m);
    cout<<endl;
    cout<<"Have you taken the final? (1=yes, 2=no)"<<endl;
    int check=0;
    cin>>check;
    if (check==1)
    {
        float final_marks= finals(final_m);
        cout<<"Course grade = "<<final_marks+homework_marks+mid_marks;
    }
    else if (check==2)
    {
        askGrade(final_m,homework_marks,mid_marks);
    }
    return 0;
}
float homework(float hw_m)
{
    cout<<"Homework (weight "<<hw_m<<"): ";
    int number=0,sections=0;
    cout<<"Number of assignments? ";
    cin>>number;
    float marks[number][2]={{0,0},{0,0},{0,0}},score=0,max=20,weighted_marks=0;
    for (int i = 0; i < number; ++i)
    {
        cout<<"Assignment "<<i+1<<" score and max? ";
        cin>>marks[i][0]>>marks[i][1];
        score+=marks[i][0];
        max+=marks[i][1];
    }
    cout<<"Sections attended? ";
    cin>>sections;
    sections*=3;
    if (sections>20)
    {
        sections=20;
    }
    cout<<"Section points = "<<sections<<" / 20 "<<endl;
    cout<<"Total points = "<<score+sections<<" / "<<max<<endl;
    weighted_marks= ((score+sections)/max)*hw_m;
    cout<<"Weighted score = "<<weighted_marks<<endl;
    return weighted_marks;
}
float midterm(float mid_m)
{
    cout<<"Exam (Weight "<<mid_m<<"): "<<endl;
    float score=0,curve=0,total=0,weighted_score=0;
    cout<<"Score? ";
    cin>>score;
    cout<<"Curve? ";
    cin>>curve;
    total=curve+score;
    if (total>100)
    {
        total=100;
    }
    weighted_score= (total/100)*mid_m;
    cout<<"Total points = "<<total<<endl;
    cout<<"Weighted score= "<<weighted_score<<endl;
    return weighted_score;
}
float finals(float final_m)
{
    cout<<"Exam (weight "<<final_m<<"):"<<endl;
    cout<<"Score? ";
    float score=0,curve=0,total=0,weighted_score=0;
    cin>>score;
    cout<<"Curve? ";
    cin>>curve;
    total=curve+score;
    if (total>100)
    {
        total=100;
    }
    weighted_score=(total/100)*final_m;
    cout<<"Total points = "<<total<<" / 100"<<endl;
    cout<<"Weighted score = "<<weighted_score<<endl;
    return weighted_score;
}
void askGrade(float final_m,float homework_marks, float mid_marks)
{
    float expected_grade=0;
    cout<<"Expected grade? ";
    cin>>expected_grade;
    cout<<"Needed score = "<<((expected_grade-homework_marks-mid_marks)/final_m)*100<<endl;
}