// Write a program to Write function to find maximum.

#include <bits/stdc++.h>
using namespace std;

int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }

    return b;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<maximum(a,b);

    return 0;
}