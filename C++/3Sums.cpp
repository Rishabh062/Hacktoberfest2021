//Question: https://leetcode.com/problems/3sum/
//The brute force approach will be to run three loops (i to n-1), (j=i+1 to n-1) and (k=j+1 to n-1) and then store all the
// triplets in a set. The TC: O(n cube * logm) logm is the time taken to insert values into set

//The most optimal will be to use an advanced version of 2-pointers approach
//The triplets sum will be zero so a+b+c = 0 OR b+c=-a

//STEP 1: First we SORT the array
//STEP 2: We will be keeping a fixed and moving b and c. B will be i+1 and c will be the last element.
//        If b+c is greater than sum we decrement c, else we increment b

//STEP 3: Once the sum is equal we will run loops to make sure we get no duplicate b,c.
//STEP 4: Once done we run a loop and go to the next a which is not equal to the prev a and do the same thing.

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end()); //sorting

    vector<vector<int>> ans; //vector of vectors to store all the triplets
                             //to store a,b,c

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int low = i + 1;
            int high = nums.size() - 1;
            int sum = 0 - nums[i];

            while (low < high)
            {

                if (nums[low] + nums[high] == sum)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]); //inserting triplets
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    ans.push_back(temp);

                    while (low + 1 < high && nums[low] == nums[low + 1]) //no duplicate low
                        low++;
                    while (low < high - 1 && nums[high] == nums[high - 1]) //no duplicate high
                        high--;

                    low++;  //brand new low
                    high--; //brand new high
                }
                else if (nums[low] + nums[high] > sum)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> vect;
    int a, n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vect.push_back(a);
    }

    vector<vector<int>> result = threeSum(vect);
    cout << "idk how to print a vector of vectors"
}