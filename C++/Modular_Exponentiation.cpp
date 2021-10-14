//Modular Exponentiation (Power in Modulo arithmetic) (O(logn)) 
#include <bits/stdc++.h>
using namespace std;

void modexpo(long long int a, long long int b, long long int c)
{
    int ans = 1, v = 0;
    a = a % c; //update a if it is more than or equal to c
    if (a == 0) // if a is divisible by c
    {
        cout << 0 << endl;
        v = 1;
    }
    while (b) //check till number becomes zero
    {
        if (b & 1) //if b is odd, multiply a with "ans"
        {
            ans = (ans * a) % c;
            ;
        }
        a = (a * a) % c; //change a to a^2
        b = b >> 1;      // b = b/2
    }
    if (v != 1)
    {
        cout << ans;
    }
}
int main()
{
    long long int a = 0, b = 0, c = 0;
    cout << "Enter 3 integers:" << endl;
    cin >> a >> b >> c;
    //(a^b % c)
    modexpo(a, b, c);
    return 0;
}