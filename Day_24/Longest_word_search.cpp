// Write a program to Find longest word.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter a sentence: ";
    cin.getline(str,100);

    int max=0,start=0,index=0,count=0;

    for(int i=0;;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                start=index;
            }

            count=0;
            index=i+1;
        }

        if(str[i]=='\0')
        {
            break;
        }
    }

    cout<<"Longest word: ";

    for(int i=start;i<start+max;i++)
    {
        cout<<str[i];
    }

    return 0;
}