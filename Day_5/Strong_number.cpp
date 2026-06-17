// Write a program to Check strong number.
#include <bits/stdc++.h>
using namespace std;
void number(int n)
{
    int num=n, digit, factorial = 1, sum=0;
    while (n>0)
    {
        digit=n%10;
        {
            factorial = 1;
            for(int i= digit; i>0; i--)
            {
                factorial = factorial * i;
            }
            sum = sum + factorial;
        }
        n = n/10;
    }
    if (sum == num)
    cout << "Strong Number";
    else 
    cout << "Not Strong Number";
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;
    number(n);
    return 0;
}