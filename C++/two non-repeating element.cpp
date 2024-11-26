//  find   two non-repeating elements in an array  using bit-masking
 // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        int val =0;
        for(int i=0;i<nums.size();i++)
        {
        	val^=nums[i];
		}
        int rmsp = val;
         rmsp = rmsp&~(rmsp-1);
         int x=0,y=0;
         for(int i=0;i<nums.size();i++)
         {
         	if(rmsp &nums[i]==0)
         	{
         		x = x^nums[i];
			 }
			 else
			 {
			 	y =y^nums[i];
			 }
		 }
		 vector <int>v;
		 v.push_back(x);
		 v.push_back(y);
        return v;



    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for( int i=0;i<ans.size();i++)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
