// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].


// O(log n) + O(n) = O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> _map;
        
	// O(n)
        for (int i = 0; i < nums.size(); i++) {
            _map[nums[i]] = i; 
        }
        

        vector<int> _res;
        int result;
	// O(log n)
        for (int i = 0; i < nums.size(); i++) {
            result = target - nums[i];
            if (_map[result] && i != _map[result]) {
                _res.push_back(i);
                _res.push_back(_map[result]);
                break;
            }
        }
        
        return _res;
    }
};
