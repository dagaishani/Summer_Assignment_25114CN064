// Write a program to Print multiplication table of a given number.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=1;
    cout << "Enter the number for the table: ";
    cin >> n;
    cout << endl;
    for(i; i<=10; i++)
    {
        int multiple = n*i;
        cout << n << " x " << i << " = " << multiple << endl;
    }
    return 0;

}