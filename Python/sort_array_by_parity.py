# Problem Statement
"""
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even. Return any answer array that satisfies this condition

Example:

Input: nums = [6,4,7,9]
Output: [6,7,4,9]
Explanation: [6,9,4,7], [4,7,6,9], [4,9,6,7] would also have been accepted.

"""

class Solution:
    def sortArrayByParity(self, nums):
        even = 0
        odd = 1
        resultArr = [0]*len(nums)
        for i in range(len(nums)):
            if nums[i] % 2 == 0: # find even
                resultArr[even] = nums[i]
                even += 2
            else: # find odd
                resultArr[odd] = nums[i]
                odd += 2
                
        return resultArr

# main block
if __name__ == "__main__":
    numsInput = input()   # takes the whole line of n numbers
    arr = list(map(int,numsInput.split(' '))) # array format
    resultArr = Solution().sortArrayByParity(arr)
    print(resultArr)