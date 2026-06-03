// Write a program to Generate Fibonacci series
#include <bits/stdc++.h>
using namespace std;
void series(int n)
{
    int first = 0, second= 1, term;
    if(n==1)
    {
        cout << first;
        return;
    }
    cout << first << " " << second;
    for (int i=0; i<n-2; i++)
    {
        term= first+second;
        cout << " " << term;
        first = second;
        second = term;
    }
}
int main()
{
    int n;
    cout << "Enter the number of terms to be printed in the series: ";
    cin >> n;
    cout << endl <<"Fibonacci Series:" << endl;
    series(n);
    return 0;
}