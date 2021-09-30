#include <bits/stdc++.h>
using namespace std;
#define fatafat ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

bool f(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    int n = startTime.size();
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({startTime[i], endTime[i], profit[i]});
    }
    sort(v.begin(), v.end(), f);
    int dp[n];

    dp[0] = v[0][2];

    for (int i = 1; i < n; i++)
    {
        int include = v[i][2];
        int lastProfit = -1;
        int low = 0;
        int high = i - 1;

        // we will do a binary search b/w 0 to i-1 to get max profit whose end time is less or equal to the start time at v[i]

        while (low <= high)
        {
            int mid =  (low+high)/2;
            if(v[mid][1] <= v[i][0])
            {
                lastProfit = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // lastProfit==-1 means there is no job whose end time is less or equal to start  time of current job.....if it is not -1 then we will add the previous profit whose end time is less or equal to start time at i

        if (lastProfit != -1)
        {
            include+=dp[lastProfit];
        }
        // check for max profit after including and excluding the current job

        int exclude = dp[i-1];
        dp[i] = max(include,exclude);
    }
    return dp[n-1];
}

int main()
{
    fatafat
    int t = 1;
    // cin >>t;
    while(t--)
    {
       int n;
       cin >>n;
       vector<int> startTime(n);
       vector<int> Duration(n);
       vector<int> Profit(n);

       for (int i = 0; i < n; i++)
       {
           cin >>startTime[i]>>Duration[i]>>Profit[i];
       }
       vector<int>endTime(n);
       for (int i = 0; i < n; i++)
       {
           endTime[i] = startTime[i] + Duration[i];
       }
       // Max Profit------------------------------------->
       cout <<jobScheduling(startTime, endTime, Profit);
    }
    return 0;
}
