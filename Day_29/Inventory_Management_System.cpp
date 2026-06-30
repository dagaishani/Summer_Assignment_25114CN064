// Write a program to Create inventory management system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of products: ";
    cin>>n;

    int id[n],quantity[n];
    char name[n][50];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Product ID: ";
        cin>>id[i];

        cout<<"Enter Product Name: ";
        cin>>name[i];

        cout<<"Enter Quantity: ";
        cin>>quantity[i];
    }

    cout<<"\nInventory Details"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Product ID: "<<id[i]<<endl;
        cout<<"Product Name: "<<name[i]<<endl;
        cout<<"Quantity: "<<quantity[i]<<endl<<endl;
    }

    return 0;
}