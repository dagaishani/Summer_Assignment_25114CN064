// Write a program to Create menu-driven calculator.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    float a,b;

    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    switch(choice)
    {
        case 1:
            cout<<"Result = "<<a+b;
            break;

        case 2:
            cout<<"Result = "<<a-b;
            break;

        case 3:
            cout<<"Result = "<<a*b;
            break;

        case 4:
            if(b!=0)
            {
                cout<<"Result = "<<a/b;
            }
            else
            {
                cout<<"Division by zero is not possible.";
            }
            break;

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}