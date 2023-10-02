/*
There is a hidden integer array arr that consists of n non-negative integers.
It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].
You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].
Return the original array arr. It can be proved that the answer exists and is unique.

Example 1:
Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]

Example 2:
Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
 
Constraints:
2 <= n <= 104
encoded.length == n - 1
0 <= encoded[i] <= 105
0 <= first <= 105
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> ans(n + 1); 
        ans[0] = first;
        for (int i = 0; i < n; i++) {
            ans[i + 1] = encoded[i] ^ ans[i];
        }
        return ans;
    }
};
/*
Time Complexity:

The loop iterates through the elements of the encoded vector exactly once.
Inside the loop, there is a constant-time operation for each element, which is the XOR operation.
Therefore, the time complexity of this code is O(n), where n is the size of the encoded vector.

Space Complexity:

The code uses an additional vector ans to store the decoded values. The size of the ans vector is n + 1, where n is the size of the encoded vector.
There are no other significant memory-consuming operations in the code.
Thus, the space complexity of this code is O(n).
*/