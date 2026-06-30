// Write a program to Create bank account system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[50];
    int accNo;
    float balance;

    cout<<"Enter Account Holder Name: ";
    cin>>name;

    cout<<"Enter Account Number: ";
    cin>>accNo;

    cout<<"Enter Balance: ";
    cin>>balance;

    cout<<"\nAccount Details"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<accNo<<endl;
    cout<<"Balance: "<<balance<<endl;

    return 0;
}