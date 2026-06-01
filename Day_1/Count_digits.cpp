// Write a program to Count digits in a number.
#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n = n/10;
    }
    return c;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl << "Count= " << count(n);
    return 0;

}
