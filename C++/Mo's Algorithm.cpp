// only for offline queries.
// divide array into sqrt(n) blocks;
// sort the queries in same block in ascending order of r.
// sort the queries in the different blocks in ascending order of l. 

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define ld long double
using namespace std;
const int N = 1e5 + 5;
const int MOD = 1e9 + 7;
int sz = sqrt(N), cur, n;
int mp[N];

struct st{
	int l, r, i;
};

bool cmp(st a, st b){
	if(a.l/sz == b.l/sz)
		return a.r < b.r;
	return a.l < b.l;
}

void add(int x){
	if(x > n)
		return;
	if(mp[x] == x)
		--cur;
	mp[x]++;
	if(mp[x] == x)
		++cur;
}

void sub(int x){
	if(x > n)
		return;
	if(mp[x] == x)
		--cur;
	mp[x]--;
	if(mp[x] == x)
		++cur;
}

void solve(){
	int q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	st qq[q];
	for(int i = 0; i < q; ++i){
		cin >> qq[i].l >> qq[i].r;
		qq[i].i = i;
		qq[i].l--, qq[i].r--;
	}
	sort(qq, qq + q, cmp);
	vector<int> ans(q, 0);
	int pre_l = 0, pre_r = 0;
	for(int i = 0; i < q; ++i){
		int l = qq[i].l, r = qq[i].r, idx = qq[i].i;
		while(pre_l > l){
			add(a[pre_l - 1]);
			pre_l--;
		}
		while(pre_l < l){
			sub(a[pre_l]);
			pre_l++;
		}
		while(pre_r <= r){
			add(a[pre_r]);
			++pre_r;
		}
		while(pre_r > r + 1){
			sub(a[pre_r - 1]);
			--pre_r;
		}		
		ans[idx] = cur;
	}
	for(int i = 0; i < q; ++i)
		cout << ans[i] << '\n';
}

int main(){
	fast;
	int t = 1;
	// cin >> t;
	while(t--)
		solve();
	return 0;
}
