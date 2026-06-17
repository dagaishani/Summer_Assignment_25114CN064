// Write a program to Write function for Armstrong.

#include <bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    int temp=n;
    int sum=0;

    while(n!=0)
    {
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==temp)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
}

int main()
{
    int n;
    cin>>n;

    armstrong(n);

    return 0;
}