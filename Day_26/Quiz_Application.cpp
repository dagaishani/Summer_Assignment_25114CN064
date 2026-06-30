// Write a program to Create quiz application.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score=0;
    char ans;

    cout<<"Q1. Capital of India?"<<endl;
    cout<<"a) Mumbai"<<endl;
    cout<<"b) Delhi"<<endl;
    cout<<"c) Chennai"<<endl;

    cin>>ans;

    if(ans=='b' || ans=='B')
    {
        score++;
    }

    cout<<"\nQ2. 5 + 7 = ?"<<endl;
    cout<<"a) 10"<<endl;
    cout<<"b) 11"<<endl;
    cout<<"c) 12"<<endl;

    cin>>ans;

    if(ans=='c' || ans=='C')
    {
        score++;
    }

    cout<<"\nQ3. C++ is a?"<<endl;
    cout<<"a) Programming Language"<<endl;
    cout<<"b) Operating System"<<endl;
    cout<<"c) Browser"<<endl;

    cin>>ans;

    if(ans=='a' || ans=='A')
    {
        score++;
    }

    cout<<"\nYour Score = "<<score<<" out of 3";

    return 0;
}