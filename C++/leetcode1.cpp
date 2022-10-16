class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<int> p(n), q(n);

    for (int i = 0; i < n; i++)
    {
        p[i] = intervals[i][0];
        q[i] = intervals[i][1];
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    int a = 0, b = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (q[j] < p[i])
        {
            j++;
            a--;
        }

        a++;
        b = max(b, a);
    }

    return b;
    }
};
