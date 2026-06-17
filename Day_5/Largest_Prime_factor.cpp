// Write a program to Find largest prime factor. 
#include <bits/stdc++.h>
using namespace std;
void factors(int n)
{
    int largest=0, factor, count=0;
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            factor = i;

            count=0;
            for (int j=1; j<factor; j++)
            {
                
                if (factor%j==0)
                {
                    count++;
                }

            }
            if (count == 1)
            {
                if(factor>largest)
                {
                    largest =factor;
                }
            }
        }
    
    }
    cout << largest;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Largest prime factor= ";
    factors(n);
    cout << endl;
    return 0;
}