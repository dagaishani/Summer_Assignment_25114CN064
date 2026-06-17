// Write a program to Check perfect number. 
#include <bits/stdc++.h>
using namespace std;
void number(int n)
{
    int sum=0;
    for (int i=1; i<=n/2; i++)
    {
        if(n%i==0)
        sum = sum + i;
    }
    if (sum == n)
    {
        cout << "Perfect Number.";
    }
    else 
    cout << "Not a Perfect Number.";

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