//Write a program to Find pair with given sum.

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

    int sum;
    cout<<"Enter required sum: ";
    cin>>sum;

    int found=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Pair is "<<arr[i]<<" and "<<arr[j]<<endl;
                found=1;
            }
        }
    }

    if(found==0)
    {
        cout<<"No pair found";
    }

    return 0;
}