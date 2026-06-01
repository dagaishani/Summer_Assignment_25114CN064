// Write a program to Check whether a number is palindrome.
#include <bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
    int rev=0;
    int m = n;
    while (n!=0)
    {
        int digit= n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if (rev == m)
    cout << "Palindrome";
    else 
    cout << "Not Palindrome";
}
int main()
{
    int n;
    cout << "Enter the digit: ";
    cin >> n;
    palindrome(n);
    return 0;
}