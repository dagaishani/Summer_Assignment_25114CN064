// Write a program to Find column-wise sum.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    int arr[r][c];

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Column-wise sum:"<<endl;

    for(int i=0;i<c;i++)
    {
        int sum=0;

        for(int j=0;j<r;j++)
        {
            sum=sum+arr[j][i];
        }

        cout<<sum<<endl;
    }

    return 0;
}