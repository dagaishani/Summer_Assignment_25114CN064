// Write a program to Create student record system using arrays and strings.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    int roll[n];
    char name[n][50];
    float marks[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Roll Number: ";
        cin>>roll[i];

        cout<<"Enter Name: ";
        cin>>name[i];

        cout<<"Enter Marks: ";
        cin>>marks[i];
    }

    cout<<"\nStudent Records"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Roll Number: "<<roll[i]<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Marks: "<<marks[i]<<endl<<endl;
    }

    return 0;
}