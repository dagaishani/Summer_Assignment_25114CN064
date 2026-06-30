// Write a program to Create menu-driven array operations system.

#include <bits/stdc++.h>
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

    int choice;

    cout<<"\n1. Display Array"<<endl;
    cout<<"2. Find Sum"<<endl;
    cout<<"3. Find Largest Element"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

        case 2:
        {
            int sum=0;

            for(int i=0;i<n;i++)
            {
                sum=sum+arr[i];
            }

            cout<<"Sum = "<<sum;
            break;
        }

        case 3:
        {
            int max=arr[0];

            for(int i=1;i<n;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }

            cout<<"Largest Element = "<<max;
            break;
        }

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}