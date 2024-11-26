/*
                                                #Hacktoberfest2021
There is a large hotel, and n customers will arrive soon. Each customer wants to have a single room.

You know each customer's arrival and departure day. Two customers can stay in the same room if the departure day of the first customer is earlier than the arrival day of the second customer.

What is the minimum number of rooms that are needed to accommodate all customers? And how can the rooms be allocated?

Input

The first input line contains an integer n: the number of customers.

Then there are n lines, each of which describes one customer. Each line has two integers a and b: the arrival and departure day.

Output

Print first an integer k: the minimum number of rooms required.

After that, print a line that contains the room number of each customer in the same order as in the input. The rooms are numbered 1,2,…,k. You can print any valid solution.

Constraints
1≤n≤2⋅105
1≤a≤b≤109
Example

Input:
3
1 2
2 4
4 4

Output:
2
1 2 1
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lg long
#define pt pair<int,int>
//map<ll,bool> m;
 
bool cmp(vector<int> &a,vector<int> &b) {
    return a[0]<=b[0];
}
 
int main() {
 
    int n;
    cin>>n;
 
    vector<vector<int> > v;
 
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
 
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(i);
 
        v.push_back(temp);
    }
 
    vector<int> ans(n);
    int res = 1;
    priority_queue<pt,vector<pt>,greater<pt> > pq;
 
    sort(v.begin(),v.end(),cmp);
 
    for(int i=0;i<n;i++) {
        int a = v[i][0];
        int b = v[i][1];
        int ind = v[i][2];
 
        if(pq.empty())  {
        pq.push({b,res});
        res++;
        ans[ind] = res-1;
        }
 
        else {
            int x = pq.top().first;
            int y = pq.top().second;
 
            if(a>x)
            {
                pq.pop();
                pq.push({b,y});
                ans[ind] = y;
            }
 
            else {
                ans[ind] = res;
                res++;
 
                pq.push({b,res-1});
            }
        }
    }
 
    cout<<pq.size()<<"\n";
 
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
 
    cout<<"\n";
 
 
  //  cout<<"\n";
 
    return 0;
}

