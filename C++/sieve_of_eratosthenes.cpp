/*
Program to find prime numbers in a range using Sieve of Eratosthenes
*/

//TIME COMPLEXITY : O(N*log(log N))
#include <iostream>
#include <vector>
using namespace std;

void sieve(long long n) //gunction to calcualte prime numbers
{
   vector<int> m(n + 1, 0);         //Set all numbers as prime numbers 0->Prime Number, 1->Composite Number
   m[0] = m[1] = 1;                 //set 0 and 1 as composite as they are not prime
   for (int i = 2; i * i <= n; i++) /* Start loop from i=2 and go till i is smaller than root of n 
                                 because for two pairs of numbers (a,b) if a*b=N then one of (a or b) lies
                                 below the sqrt of n and the other above sqrt of n*/
   {
      if (m[i] == 0) /*check if no is prime */
      {
         for (int j = i * i; j <= n; j += i) /* Start j from i*i because all numbers before it will already be marked
                                               by other prime numbers */
            m[j] = 1;                        /* Mark all the multiples of this number as composite*/
      }
   }

   for (int i = 0; i <= n; i++) //print prime numbers in the range 1...N
   {
      if (m[i] == 0)
         cout << i << "\n";
   }
}

int main()
{
   int n;
   cout << "\nEnter range : ";
   cin >> n;
   sieve(n);
   return 0;
}
