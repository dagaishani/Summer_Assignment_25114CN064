// Write a program to Find sum and average of array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(float)sum/n;

    return 0;
}