// Problem Description : 
// Find the maximum sum such that it is smaller than or equal to x;
// N <= 40, X <= 10^9, A[i] <= 10^9;


#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define ld long double
using namespace std;
const int N = 1e6 + 5;
const int MOD = 1e9 + 7;
vector<long long int> sum_left, sum_right, leftt, rightt;

long long int generate_left(int i, long long int sum) {
	if (i >= leftt.size()) {
		if (sum) sum_left.push_back(sum);
		return 0;
	}
	generate_left(i + 1, sum + leftt[i]);
	generate_left(i + 1, sum);
	return 0;
}

long long int generate_right(int i, long long int sum) {
	if (i >= rightt.size()) {
		if (sum) sum_right.push_back(sum);
		return 0;
	}
	generate_right(i + 1, sum + rightt[i]);
	generate_right(i + 1, sum);
	return 0;
}

void solve() {
	long long int n, x;
	cin >> n >> x;
	long long int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i) {
		if (i < (n / 2)) leftt.push_back(a[i]);
		else rightt.push_back(a[i]);
	}
	long long int ans = 0;
	generate_left(0, 0);
	generate_right(0, 0);
	sort(sum_left.begin(), sum_left.end());
	sort(sum_right.begin(), sum_right.end());
	for(int i = 0; i < sum_left.size(); ++i){
		if(sum_left[i] > x) break;
		ans = max(ans, sum_left[i]);
		long long int tar = x - sum_left[i];
		int add = -1, low = 0, high = sum_right.size() - 1;
		while(low <= high){
			int mid = (low + high) / 2;
			if(sum_right[mid] > tar)
				high = mid - 1;
			else{
				add = sum_right[mid];
				low = mid + 1;
			}
		}
		if(add != -1)
			ans = max(ans, sum_left[i] + add);
	}
	for(int i = 0; i < sum_right.size(); ++i){
		if(sum_right[i] > x) break;
		ans = max(ans, sum_right[i]);
		long long int tar = x - sum_right[i];
		long long int add = -1, low = 0, high = sum_left.size() - 1;
		while(low <= high){
			int mid = (low + high) / 2;
			if(sum_left[mid] > tar)
				high = mid - 1;
			else{
				add = sum_left[mid];
				low = mid + 1;
			}
		}
		if(add != -1)
			ans = max(ans, sum_right[i] + add);
	}
	cout << ans << '\n';
}	

int main() {
	fast;
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
