// Write a program to Count set bits in a number. 
#include <bits/stdc++.h>
using namespace std;

void bits(int n)
{
    int count=0;

    while(n!=0)
    {
        if(n%2==1)
        {
            count++;
        }

        n=n/2;
    }

    cout<<count;
}

int main()
{
    int n;
    cin>>n;

    bits(n);

    return 0;
}