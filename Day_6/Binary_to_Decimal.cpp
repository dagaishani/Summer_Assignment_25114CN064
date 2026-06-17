// Write a program to Convert binary to decimal.
#include <bits/stdc++.h>
using namespace std;
void num(int n)
{
    int rem=0, sum=0, i=0;
        while(n!=0)
        {
            rem = n % 10;
            if (rem != 0 && rem != 1)
                {
                    cout << "Invalid binary number";
                    return;
                }
            sum = rem*pow(2,i)+sum;
            n= n/10;
            i++;
        }
    cout <<"Decimal Number= " << sum;
}
int main()
{
    int n;
    cout << "Enter the binary number= ";
    cin >> n;
    num(n);
    return 0;
}
