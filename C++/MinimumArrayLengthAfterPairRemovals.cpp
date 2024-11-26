class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int a=0;
        map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
            a=max(a,m1[nums[i]]);
        }
        if(2*a<nums.size()) return nums.size()%2;
        else return 2*a-nums.size();
    }
};
