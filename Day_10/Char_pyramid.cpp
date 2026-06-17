// Write a program to Print character pyramid.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        char ch='A';

        for(int j=1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }

        ch=ch-2;

        for(int j=i-1; j>=1; j--)
        {
            cout<<ch;
            ch--;
        }

        cout<<endl;
    }

    return 0;
}