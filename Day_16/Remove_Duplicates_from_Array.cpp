//Write a program to Remove duplicates from array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array after removing duplicates:"<<endl;

    for(int i=0;i<n;i++)
    {
        int duplicate=0;

        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}