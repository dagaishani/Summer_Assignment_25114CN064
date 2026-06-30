// Write a program to Merge two sorted arrays.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;

    cout<<"Enter size of first array: ";
    cin>>n1;

    cout<<"Enter size of second array: ";
    cin>>n2;

    int arr1[n1],arr2[n2],arr3[n1+n2];

    cout<<"Enter elements of first array:"<<endl;

    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter elements of second array:"<<endl;

    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    int i=0,j=0,k=0;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }

    cout<<"Merged array:"<<endl;

    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}