// Write a program to Subtract matrices.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

    int a[r][c],b[r][c],sub[r][c];

    cout<<"Enter elements of first matrix:"<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of second matrix:"<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Difference of matrices:"<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}