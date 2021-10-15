/*Roy has n candies, where the ith candy is of type candyType[i]
Given the integer array candyType of length n, return the maximum number of different 
types of candies he can eat if he only eats n / 2 of them.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int distributeCandies(vector<int>& candyType) {
        /*place the array of candies in a set si that only unique candies will be present*/
        unordered_set<int>s(candyType.begin(),candyType.end());

        int n=candyType.size();
        /*if the size of set is less than or equal to n/2,then he can eat each type of candy,else he can eat only n/2 types of candies
        */
        if(s.size()<=n/2)
            return s.size();
        else
            return n/2;
    }
int main()
{
    vector<int> candyType={5,6,4,5,6,7};
    cout<<distributeCandies(candyType);
    return 0;
}


Time complexity :O(n)
Space complexity:O(n)