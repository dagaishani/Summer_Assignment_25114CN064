// Write a program to Convert decimal to binary.
#include <bits/stdc++.h>
using namespace std;
void num(int n)
{
    vector<int>store;
    if (n == 0)
    {
        cout << "Binary number= 0";
        return;
    }
    while(n>0) 
    {
        store.push_back(n%2);
        n= n/2;
    }  
    cout << "Binary number= ";
    for (int i=store.size()-1; i>=0; i--)
    {
        cout << store[i];
    }
    
}
int main()
{
    int n;
    cout << "Enter the decimal number= ";
    cin >> n;
    num(n);
    return 0;
}