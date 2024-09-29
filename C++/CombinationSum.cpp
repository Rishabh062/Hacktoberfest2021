class Solution {
public:
    vector<vector<int>> ans;
    vector<int> sub;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       // sort(candidates.begin(),candidates.end());
        back(target,candidates,0);
        return ans;
    }
    void back(int t, vector<int > c , int i)
    {
       // cout<<"hello";
        if(i==c.size())
            {if(t==0)
        {
            ans.push_back(sub);
           
        }return;}
        
        
       
      //  cout<<t<<endl;
        if(c[i]<=t)
        {
            sub.push_back(c[i]);
             back(t-c[i],c,i);
      //  t=t+sub.back();
        sub.pop_back();
        }
       
        back(t,c,i+1);
        
            
        
        
    }
};
