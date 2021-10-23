#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define VI vector<int>
#define VVI vector<vector<int>>
#define VPI vector<pair<int, int>>
#define PI pair<int, int>

bool comp(const PI &act1, const PI &act2){
    return (act1.second < act2.second);
}

int process(VPI arr){
	int n = arr.size();
	sort(arr.begin(), arr.end(), comp);
 
    cout << "Following activities are selected: " << endl;

    int i = 0, count = 0;
    cout << "(" << arr[i].first << ", " << arr[i].second << "), ";

    for (int j = 1; j < n; j++)
    {
		if (arr[j].first >= arr[i].second)
		{
			cout << "(" << arr[j].first << ", " << arr[j].second << "), ";
			count++;
			i = j;
		}
    }
    return count;
}

int main(){
	fast;
	int n;
	cin >> n;
	VPI arr;
	while(n--){
		int a, b;
		cin >> a >> b;
		arr.push_back({a, b});
	}
	cout << process(arr) << endl;
	return 0;
}
