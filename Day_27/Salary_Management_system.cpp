// Write a program to Create salary management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of employees: ";
    cin>>n;

    char name[n][50];
    float basic[n],hra[n],da[n],total[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Employee Name: ";
        cin>>name[i];

        cout<<"Enter Basic Salary: ";
        cin>>basic[i];

        hra[i]=0.20*basic[i];
        da[i]=0.10*basic[i];
        total[i]=basic[i]+hra[i]+da[i];
    }

    cout<<"\nSalary Details"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Total Salary: "<<total[i]<<endl<<endl;
    }

    return 0;
}