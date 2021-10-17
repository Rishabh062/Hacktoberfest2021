// Question : https://leetcode.com/problems/4sum/

// Suggestion :
// 1. Solve TwoSum : https://leetcode.com/problems/two-sum/
// 2. Solve ThreeSum : https://leetcode.com/problems/3sum/

// Approach :
// 1. Sort the array
// 2. Run two loops i from (0 to n) and inner loop j from (i+1 to n) now nums[i] and nums[j] are two elements from quadruplets so new tar is target-nums[i]-nums[j].
// 3. Use two pointer approach to find two sum of next two elements from quadruplets to sum up to new targt target2.
// 4. TwoSum approach two pointers staring from j+1 and n-1 three cases
//    a. nums[front]+nums[back]<target2 then do front++
//    b. nums[front]+nums[back]>target2 then do back--
//    c. nums[front]+nums[back]==target2 then add quadruplet (nums[i],nums[j],nums[front],nums[back]) add to vector res
// 5. Note to handle duplicates after each iteration we want to start with new number so run a while loop to move our index pointer to next different element
// 6. At last print the res 2d vector

// Code :
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> res;
    int n = nums.size();
    if (nums.empty())
        return res;
    //sort
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // modified target
            int target2 = target - nums[i] - nums[j];

            //two pointer appraoch start from here (TwoSum)
            int front = j + 1;
            int back = n - 1;
            while (front < back)
            {
                int sum = nums[front] + nums[back];
                // sum is smaller so to increase our sum do front++
                if (sum < target2)
                    front++;
                // sum is greater so to decrease our sum do back--
                else if (sum > target2)
                    back--;
                else
                {
                    // we got sum==target2 so add quadruplet to res
                    vector<int> quad(4, 0);
                    quad[0] = nums[i];
                    quad[1] = nums[j];
                    quad[2] = nums[front];
                    quad[3] = nums[back];

                    res.push_back(quad);

                    //handle duplicates for front
                    while (front < back && nums[front] == quad[2])
                        front++;

                    //handle duplicates  for back
                    while (front < back && nums[back] == quad[3])
                        back--;
                }
            }

            // handle duplicates for j
            while (j + 1 < n && nums[j + 1] == nums[j])
                j++;
        }
        // handle duplicates for i
        while (i + 1 < n && nums[i + 1] == nums[i])
            i++;
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter "<<n<<" integers of array\n";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int target;
    cout<<"Enter target value :";
    cin >> target;
    vector<vector<int>> ans = fourSum(nums, target);
    cout<<"All quadruplets that sum up to target are..\n";
    for (auto v : ans)
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}