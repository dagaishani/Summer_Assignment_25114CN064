// Write a program to Print factors of a number.
#include <bits/stdc++.h>
using namespace std;
void factors(int n)
{
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factors of the number: ";
    factors(n);
    cout << endl;
    return 0;
}