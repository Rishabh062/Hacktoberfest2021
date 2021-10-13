// question-- https://cses.fi/problemset/task/1618/

// Time complexity--O(log5(n)) //log n with base as 5
#include<iostream>
#include<math.h>
using namespace std;
int fun1(long long n)
{   long long ans=0;
    long long i=5;
    while(i<=n)
    {
      ans=ans+floor(n/i);
      i=i*5;
    }
    return ans;
}
int main()
{   
    long long n;
    cin>>n;
    cout<<fun1(n);
    return 0;
}
