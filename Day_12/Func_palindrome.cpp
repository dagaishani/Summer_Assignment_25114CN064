// Write a program to Write function for palindrome.

#include <bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int temp=n;
    int rev=0;

    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }

    if(temp==rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}

int main()
{
    int n;
    cin>>n;

    palindrome(n);

    return 0;
}