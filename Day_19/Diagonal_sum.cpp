// Write a program to Find diagonal sum.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter order of square matrix: ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter matrix elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i][i];
    }

    cout<<"Diagonal sum = "<<sum;

    return 0;
}