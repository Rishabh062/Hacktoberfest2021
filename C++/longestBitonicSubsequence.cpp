// Question Link - https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lbs-official/ojquestion
// Author - Shumbul Arifa

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define inar(arr,n) for(int i=0; i<n; i++) cin>>arr[i];
#define suma(arr,n) for(int i=0; i<n; i++) sum+=arr[i];
#define for0(i,n) for(int i=0; i<n; i++)
#define for1(i,n) for(int i=1; i<=n; i++)
#define forr(i,n) for(int i=n-1; i>=0; i--)
#define rof(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define print(v) cout<<v<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
const int mod = 1e9 + 7;
ll gcd (ll a, ll b) {return ( a ? gcd(b % a, a) : b );}
ll power(ll a, ll n) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1; while (n > 0) {if (n % 2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

signed main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;	cin >> n;
	int ar[n];
	for0(i, n) {
		cin >> ar[i];
	}
	int lis[n];
	// memset(lis, 0, sizeof lis);
	int lds[n];
	// memset(lds, 0, sizeof lds);
	// lis[0] = 1, lds[n - 1] = 1;
	for (int i = 0; i < n; i++) {
		int max = 0;
		for (int j = 0; j < i; j++) {
			if (ar[i] >= ar[j]) {
				if (lis[j] > max) {
					max = lis[j];
				}
			}
		}
		lis[i] = max + 1;
	}

	for (int i = n - 1; i >= 0; i--) {
		int max = 0;
		for (int j = n - 1; j > i; j--) {
			if (ar[i] >= ar[j]) {
				if (lds[j] > max) {
					max = lds[j];
				}
			}
		}
		lds[i] = max + 1;
	}

	int ans = 0;
	for0(i, n) {
		ans = max(ans, lds[i] + lis[i] - 1);
		cout << lis[i] << " " << lds[i] << endl;
	}
	cout << ans << "\n";

	return 0;
}
