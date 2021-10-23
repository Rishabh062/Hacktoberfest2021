#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define f_input freopen("inputs/input1.txt", "r", stdin)
#define f_output freopen("inputs/output.txt", "w", stdout)

#define VI vector<int>
#define pb push_back

class Solution{
public:
	bool BalanceParenthesis(string st){
		stack<char> s;
		for(auto it: st){
			if(it == '(' or it == '[' or it == '{'){
				s.push(it);
				continue;
			}
			if(s.empty()) return false;
			char x;
			switch(it){
				case ')': 	
					x = s.top();
					s.pop();
					if(x == '{' || x == '[')
						return false;
					break;
				case ']': 
					x = s.top();
					s.pop();
					if(x == '(' || x == '{')
						return false;
					break;
				case '}':
					x = s.top();
					s.pop();
					if(x == '(' || x == '[')
						return false;
					break;
				default: continue;
			}
		}
		if(s.empty()) return true;
		return false;
	}
};

int main(){
	fast;
#ifndef ONLINE_JUDGE
	f_input;
	//~ f_output;
#endif

	string s;
	cin >> s;
	Solution obj;
	bool result = obj.BalanceParenthesis(s);
	if(result)
		cout << "The given input is Balanced" << endl;
	else
		cout << "The given input is not Balanced" << endl;
	return 0;
}


/*
Case 1:	{[([])]}
Case 2:	{([{()}]){[()]}}()

*/
