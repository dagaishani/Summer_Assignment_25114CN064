// Write a program to Find nth Fibonacci term.
#include <bits/stdc++.h>
using namespace std;
void term(int n)
{
    int first = 0, second= 1, term;
    if(n==1)
    {
        cout <<first;
        return;
    }
    else if (n==2)
    {
        cout << second;
        return;
    }
    else 
    {
        for (int i=0; i<n-2; i++)
        {
            term= first+second;
            first = second;
            second = term;
        }
        cout << term;
    }
}
int main()
{
    int n;
    cout << "The nth term of the series: ";
    cin >> n;
    cout << endl <<"The " << n << "th term of the series is: ";
    term(n);
    return 0;
}