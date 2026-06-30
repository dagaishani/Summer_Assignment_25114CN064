// Write a program to Transpose matrix.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter matrix elements:"<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Transpose of matrix:"<<endl;

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}