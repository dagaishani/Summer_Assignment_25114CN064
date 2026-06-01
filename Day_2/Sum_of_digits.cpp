// Write a program to Find sum of digits of a number.
#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0;
    while (n>0)
    {
        int digit = n % 10;
        s = s + digit;
        n = n/10;
    }
    return s;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl << "Sum= " << sum(n);
    return 0;
}