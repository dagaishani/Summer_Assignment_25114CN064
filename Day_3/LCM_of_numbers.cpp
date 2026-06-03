// Write a program to Find LCM of two numbers.
#include <bits/stdc++.h>
using namespace std;
int lcm(int n, int m)
{
    int ans;
    for (int i= max(n,m); ; i++)
    {
        if (i%n==0 && i%m==0)
        {ans = i;
        break;}
    }
    return ans;
}
int main()
{
    int n,m;
    cout << "Enter 2 numbers= ";
    cin >> n>> m;
    
    cout << endl << "LCM= "<< lcm(n,m);
    return 0;
}