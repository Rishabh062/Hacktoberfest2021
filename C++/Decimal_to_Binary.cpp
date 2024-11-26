// Contributed Decimal to binary conversion program in cpp by Ankit Kumar Srivastava

// C++ implementation of the approach
#include <cmath>
#include <iostream>
using namespace std;
typedef long long int ll;

// Function to return the binary
// equivalent of decimal value N
ll decimalToBinary(ll N)
{

	// To store the binary number
	ll B_Number = 0;
	ll cnt = 0;
	while (N != 0) {
		ll rem = N % 2;
		ll c = pow(10, cnt);
		B_Number += rem * c;
		N /= 2;

		// Count used to store exponent value
		cnt++;
	}

	return B_Number;
}

// Driver code
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll N;
	cin >> N;
	cout << decimalToBinary(N);
	return 0;
}
