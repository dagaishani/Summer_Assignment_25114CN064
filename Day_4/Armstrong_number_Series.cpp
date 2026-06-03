#include <bits/stdc++.h>
using namespace std;
void range(int n)
{
    int num, count=0, check=0, digit;
    for (int i=1; i<=n; i++)
    {
        num=i;
        count = 0;
        int temp = i;
        while(temp>0)
        {
            count++;
            temp=temp/10;
        }
        i=num;
        temp=i;
        check=0;
        while(temp>0)
        {
            digit = temp%10;
            check = check + pow(digit, count);
            temp= temp/10; 
        }
        i= num;
        if(check == num)
        cout << num << " ";
    }

}
int main()
{
    int n;
    cout << "Armstrong series from 1 to: ";
    cin >> n;
    cout << "Range:  ";
    range(n);
    return 0;
}