// Write a program to Create ticket booking system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[50];
    int tickets;
    int price=500;
    int total;

    cout<<"Enter Name: ";
    cin>>name;

    cout<<"Enter Number of Tickets: ";
    cin>>tickets;

    total=tickets*price;

    cout<<"\nBooking Details"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Tickets: "<<tickets<<endl;
    cout<<"Total Amount: "<<total<<endl;

    return 0;
}