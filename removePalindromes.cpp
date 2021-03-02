#include<iostream>
#include<string>
using namespace std;
void removePalindromes(string a[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; ++i)
    {
        string word=a[i];
        int check=0;
        for (int j = 0; j < word.size(); ++j)
        {
            if (word[j]==word[word.size()-1-j] || word[j]==(word[word.size()-1-j]+32) || word[j]==(word[word.size()-1-j]-32) )
            {
                check++;
            }
        }
        if (check==word.size())
        {
            a[i]="";
        }
    }
}
int main(void)
{
    string a[]={"Madam", "racecar", "", "hi", "A", "Abba", "banana", "dog God", "STOP otto POTS", "Madame", "C++", "LevEL", "staTs"};
    removePalindromes(a,13);
}