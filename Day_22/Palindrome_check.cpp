// Write a program to Check palindrome string.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    int length=0;

    while(str[length]!='\0')
    {
        length++;
    }

    int flag=1;

    for(int i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"String is palindrome.";
    }
    else
    {
        cout<<"String is not palindrome.";
    }

    return 0;
}