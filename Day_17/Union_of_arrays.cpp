// Write a program to Union of arrays.

#include<iostream>
using namespace std;

int main()
{
    int n1,n2;

    cout<<"Enter size of first array: ";
    cin>>n1;

    cout<<"Enter size of second array: ";
    cin>>n2;

    int arr1[n1],arr2[n2];

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

    cout<<"Union of arrays:"<<endl;

    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }

    for(int i=0;i<n2;i++)
    {
        int found=0;

        for(int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {
            cout<<arr2[i]<<" ";
        }
    }

    return 0;
}