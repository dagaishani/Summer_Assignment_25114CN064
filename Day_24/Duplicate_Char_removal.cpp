// Write a program to Remove duplicate characters.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    cout<<"String after removing duplicate characters: ";

    for(int i=0;str[i]!='\0';i++)
    {
        int duplicate=0;

        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            cout<<str[i];
        }
    }

    return 0;
}