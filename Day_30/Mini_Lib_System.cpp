// Write a program to Create mini library system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of books: ";
    cin>>n;

    int id[n];
    char name[n][50];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Book ID: ";
        cin>>id[i];

        cout<<"Enter Book Name: ";
        cin>>name[i];
    }

    cout<<"\nLibrary Details"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Book ID: "<<id[i]<<endl;
        cout<<"Book Name: "<<name[i]<<endl<<endl;
    }

    return 0;
}