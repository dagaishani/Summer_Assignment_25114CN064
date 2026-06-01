//Write a program to Calculate sum of first N natural numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cout << "Enter the nth digit= ";
    cin >> n;
    cout << endl;
    for (int i=0; i<=n; i++)
    {
        sum= sum+i;
    }
    cout << "Sum = " << sum;
    return 0;
}