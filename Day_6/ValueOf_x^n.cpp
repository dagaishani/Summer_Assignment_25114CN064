//Write a program to Find x^n without pow(). 
#include <bits/stdc++.h>
using namespace std;

void power(int x,int n)
{
    int ans=1;

    for(int i=1;i<=n;i++)
    {
        ans=ans*x;
    }

    cout<<ans;
}

int main()
{
    int x,n;
    cin>>x>>n;

    power(x,n);

    return 0;
}