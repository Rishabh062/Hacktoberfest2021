// Search in Rotated Sorted Array

/*Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

Examples :

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int l = 0 , r = n-1;
        
        while(l <= r){
            int m = (l + r)/2;
            if(nums[m] == target){
                return m;
            }
            
            else if(nums[l] <= nums[m]){
                if(target >= nums[l] && target <= nums[m]){
                    r = m-1;
                }
                else
                    l = m+1;
            }
            else{
                if(target >= nums[m] && target <= nums[r]){
                    l = m+1;
                }
                else
                    r = m-1;
            }
        }
        return -1;
    }
};

