// Write a program to Check symmetric matrix.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter order of matrix: ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int flag=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
    {
        cout<<"Matrix is symmetric.";
    }
    else
    {
        cout<<"Matrix is not symmetric.";
    }

    return 0;
}