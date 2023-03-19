// There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.
// Input: 
// The first input line has an integer n: the number of apples.
// The next line has n integers p1,p2,…,pn: the weight of each apple.

// Output:
// Print one integer: the minimum difference between the weights of the groups.

// Constraints: 1 ≤ n ≤ 20 & 1 ≤ pi ≤ 109

// Example:

// Input:
// 5
// 3 2 7 4 1

// Output:
// 1

// Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8). 

// Code:
#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n, ans = 0, min_ans = 0, sum=0;
    cin >> n;
    vector<ll>inp(n);
    for(int i = 0; i<n; i++){
	cin >> inp[i];
	sum += inp[i];
    }
    min_ans = abs((sum - inp[n-1])-inp[n-1]);
    ll m = pow(2, n)-1;
    for(int i = 1; i<=m; i++){
	ans = 0;
	for(int j=0; j<n; j++){
	    if((i >> j) & 1)
		ans += inp[n-j-1];
	}
	if((abs((sum-ans)-ans) <= min_ans))
		min_ans = abs((sum-ans)-ans);
    }
    cout << min_ans;
    cout << "\n";
}