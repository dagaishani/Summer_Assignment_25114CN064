// Write a program to Find product of digits.
#include <bits/stdc++.h>
using namespace std;
int product(int n)
{
    int prdct=1;
    if(n==0)
    return 0;
    while (n>0)
    {
        int digit = n % 10;
        prdct= prdct * digit;
        n = n/10;
    }
    return prdct;
}
int main()
{
    int n;
    cout << "Enter the number= ";
    cin >> n;
    cout << endl << "Product of digits= " << product(n);
    return 0;
}