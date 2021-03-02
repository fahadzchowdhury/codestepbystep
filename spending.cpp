#include<iostream>
using namespace std;
void spending(string name)
{
    cout << "How much will "<<name<<" be spending? ";
    double amount=0;
    cin >> amount;
    cout<<endl;
    int numBills = (amount / 20.0);
    if (numBills * 20.0 < amount) {
    numBills++;
    }
    cout << name<< " needs " << numBills << " bills" << endl;
}