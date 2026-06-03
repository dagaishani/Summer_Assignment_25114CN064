// Write a program to Check whether a number is prime.
#include <bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int count=0;
    if (n==1)
    {
        cout << "Neither Prime nor composite";
    }
    for (int i=1; i<n; i++)
    {
        if (n%i==0)
        {
            count++;
        }

    }
    if (count > 1)
    cout << "The Number is Not Prime";
    else 
    cout << "The Number is Prime";
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;
    prime(n);
    return 0;
}