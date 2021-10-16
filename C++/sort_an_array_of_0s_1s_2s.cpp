class Solution {
public:
    void sortColors(vector<int>& nums) 
    {        
        int n=nums.size();
        int left=0,mid=0,right=n-1;
        
        while(mid<=right)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++], nums[left++]);
                continue;
            }
            else
                if(nums[mid]==2)
                {
                    swap(nums[mid], nums[right--]);
                    continue;
                }
            
                mid++;
        }
    }
};