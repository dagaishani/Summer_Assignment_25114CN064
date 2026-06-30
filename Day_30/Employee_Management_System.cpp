// Write a program to Create mini employee management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of employees: ";
    cin>>n;

    int id[n];
    char name[n][50];
    float salary[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Employee ID: ";
        cin>>id[i];

        cout<<"Enter Employee Name: ";
        cin>>name[i];

        cout<<"Enter Salary: ";
        cin>>salary[i];
    }

    cout<<"\nEmployee Details"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Employee ID: "<<id[i]<<endl;
        cout<<"Employee Name: "<<name[i]<<endl;
        cout<<"Salary: "<<salary[i]<<endl<<endl;
    }

    return 0;
}