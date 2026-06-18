// Write a program to Move zeroes to end.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int temp[n];
    int k=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            temp[k]=arr[i];
            k++;
        }
    }

    while(k<n)
    {
        temp[k]=0;
        k++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}