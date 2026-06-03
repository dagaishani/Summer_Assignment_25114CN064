// Write a program to Print prime numbers in a range. 
#include <bits/stdc++.h>
using namespace std;
void prime(int u, int l)
{
    int count=0;
    for (l; l<=u; l++)
    {
        if (l==1)
        continue;

        count =0;
        for (int i=1; i<l; i++)
        {
            if(l % i == 0)
            count++;
        }
        if (count<=1)
        cout << l << " ";
    }
}
int main()
{
    int u,l;
    cout << "Enter the Lower Limit of the range: ";
    cin >> l;
    cout << endl << "Enter the Upper Limit of the range: ";
    cin >> u;
    cout << endl << "The Prime Numbers: ";
    prime (u,l);
    return 0;
}