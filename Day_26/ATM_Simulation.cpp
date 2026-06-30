// Write a program to Create ATM simulation.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance=10000;
    int choice,amount;

    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"Available Balance = "<<balance;
    }
    else if(choice==2)
    {
        cout<<"Enter amount to deposit: ";
        cin>>amount;

        balance=balance+amount;

        cout<<"Updated Balance = "<<balance;
    }
    else if(choice==3)
    {
        cout<<"Enter amount to withdraw: ";
        cin>>amount;

        if(amount<=balance)
        {
            balance=balance-amount;
            cout<<"Updated Balance = "<<balance;
        }
        else
        {
            cout<<"Insufficient Balance.";
        }
    }
    else
    {
        cout<<"Invalid Choice.";
    }

    return 0;
}