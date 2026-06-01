// Write a program to Find factorial of a number.
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for (int i=1; i<=n; i++)
    {
        fact= fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter the number for factorial: ";
    cin >> n;
    cout << "Factorial= " << factorial (n);
    return 0;
}