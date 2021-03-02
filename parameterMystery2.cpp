#include<iostream>
using namespace std;
string parameterMystery2(string& s1,string s2)
{
    s1+="1";
    s2+="2";
    cout<<s2<<" -- "<<s1<<endl;
    return "!" + s2;
}
int main(void)
{
    string a = "hi";
    string b = "bye";
    string c = "yo";

    parameterMystery2(a,c);
    parameterMystery2(c,b);
    string d = parameterMystery2(b,a);

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}

/*
ANSWERS

yo2 -- hi1
bye2 -- yo1
hi12 -- bye1
hi1 bye1 yo1 !hi12
*/