// Write a program to Create contact management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of contacts: ";
    cin>>n;

    char name[n][50];
    long long mobile[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Name: ";
        cin>>name[i];

        cout<<"Enter Mobile Number: ";
        cin>>mobile[i];
    }

    cout<<"\nContact List"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Mobile Number: "<<mobile[i]<<endl<<endl;
    }

    return 0;
}