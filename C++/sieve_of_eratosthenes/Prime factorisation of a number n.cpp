/************************************************************************************************
spf->smallest prime factor
We perform prime factorisation of a number by dividing it with its spf till it becomes one.
The smallest prime factor is pre-calculated using a slightly modified prime sieve.

Preprocessing for Sieve: O(n log log n)
Time Complexity for factorization: O(log n)
Space Complexity: O(n)
*************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void prime_factor(int n)
{
  //pre-calculated spf
    int spf[100] = {0};
    for(int i = 2; i <= n; i++)
    {
        spf[i] = i ;
    }
    for(int i = 2; i<= n; i++)
    {
        if(spf[i]==i)
        {
            for(int j = i*i; j <= n; j += i)
            {
                if(spf[j] == j)
                spf[j] = i;
            }
        }
    }
  //prime-factorisation
    while(n!=1)
    {
        cout << spf[n] << " " ;
        n = n/spf[n] ;
    }
    cout << endl;
}
int main()
{
   int n;
   cin >> n;
   prime_factor(n);
}
