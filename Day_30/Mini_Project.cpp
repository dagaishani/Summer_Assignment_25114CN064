// Write a program to Develop complete mini project using arrays, strings and functions.

#include <bits/stdc++.h>
using namespace std;

void display(char name[], int roll, float marks)
{
    cout<<"\nStudent Details"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Marks: "<<marks<<endl;
}

int main()
{
    char name[50];
    int roll;
    float marks;

    cout<<"Enter Student Name: ";
    cin>>name;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    cout<<"Enter Marks: ";
    cin>>marks;

    display(name,roll,marks);

    return 0;
}