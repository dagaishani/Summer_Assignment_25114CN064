// Write a program to Create menu-driven string operations system.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    int choice;

    cout<<"\n1. Find Length"<<endl;
    cout<<"2. Convert to Uppercase"<<endl;
    cout<<"3. Reverse String"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            int length=0;

            while(str[length]!='\0')
            {
                length++;
            }

            cout<<"Length = "<<length;
            break;
        }

        case 2:
        {
            for(int i=0;str[i]!='\0';i++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]=str[i]-32;
                }
            }

            cout<<str;
            break;
        }

        case 3:
        {
            int length=0;

            while(str[length]!='\0')
            {
                length++;
            }

            for(int i=0;i<length/2;i++)
            {
                char temp=str[i];
                str[i]=str[length-i-1];
                str[length-i-1]=temp;
            }

            cout<<str;
            break;
        }

        default:
            cout<<"Invalid Choice.";
    }

    return 0;
}