// Write a program to Create marksheet generation system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[50];
    int roll;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;

    cout<<"Enter Student Name: ";
    cin>>name;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    cout<<"Enter marks of 5 subjects:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;

    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;

    cout<<"\n----- Marksheet -----"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;

    if(percentage>=40)
    {
        cout<<"Result: Pass";
    }
    else
    {
        cout<<"Result: Fail";
    }

    return 0;
}