#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarray(int k, vector<int> &arr , int N) {
	int mx = INT_MIN;
	int sum = 0;
	int i = 0, j = 0;
	while (j < N) {
		sum += arr[j];
		if (j - i + 1 < k) j++;
		else if (j - i + 1 == k) {
			mx = max(sum, mx);
			sum = sum - arr[i];
			i++;
			j++;
		}
	}
	return mx;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			arr.push_back(x);
		}
		cout << maximumSumSubarray(k, arr, n) << endl;
	}
	return 0;
}
