// Write a program to Check Armstrong number.
#include <bits/stdc++.h>
using namespace std;
void armstrong(int n)
{
    int count=0;
    int num, check=0, digit;
    num = n;
    while(n>0)
    {
        count++;
        n = n/10;
    }
    n=num;
    while (n>0)
    {
        digit = n%10;
        check = check + pow(digit, count);
        n= n/10;
    }
    if(check == num)
    {
        cout << "Armstrong Number.";
    }
    else 
    cout << "Not Armstrong Number.";

}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    armstrong(n);
    return 0;
}