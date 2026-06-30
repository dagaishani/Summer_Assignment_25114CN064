// Write a program to Find first repeating character.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    int flag=0;

    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                cout<<"First repeating character = "<<str[i];
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            break;
        }
    }

    if(flag==0)
    {
        cout<<"No repeating character found.";
    }

    return 0;
}