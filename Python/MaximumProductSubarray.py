'''
Given an integer array nums, find a subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.

Example 1:
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 
Constraints:
1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
'''
class Solution:
    def maxProduct(self, nums: List[int]):
        maxp = float('-inf')
        cmax = 1
        cmin = 1
        for num in nums:
            if num < 0:
                cmax, cmin = cmin, cmax
            cmax = max(cmax * num, num)
            cmin = min(cmin * num, num)
            maxp = max(maxp,cmax)
        return maxp
    
'''
Time Complexity:
The code iterates through the input nums array once, visiting each element exactly once in a linear manner.
Inside the loop, there are only a constant number of operations performed for each element (assignments, comparisons, and arithmetic operations), so the time complexity is O(n), where n is the length of the input array nums.

Space Complexity:
The code uses a constant amount of extra space, regardless of the input size.
It maintains only a few variables (maxp, cmax, cmin, and num), and the number of these variables does not depend on the size of the input array.
Therefore, the space complexity is O(1), indicating constant space usage.
    '''