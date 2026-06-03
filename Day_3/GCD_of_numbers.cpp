// // Write a program to Find GCD of two numbers.
#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m)
{
    int ans=1;
    for(int i=1; i<= min (n,m); i++)
    {
        if (m%i==0 && n%i==0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cout << "Enter the numbers: ";
    cin >> n >> m;
    cout << "GCD= " << gcd(m,n);
    return 0;
}
