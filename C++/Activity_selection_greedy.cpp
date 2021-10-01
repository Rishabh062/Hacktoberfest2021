/*
https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
Output: 
4
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    static bool comp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int,int>arr[n];
        for(int i=0;i<n;i++){
            arr[i]={start[i],end[i]};
        }
        sort(arr,arr+n,comp);
        
        int c=1;
        pair<int,int>curr=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i].first<=curr.second){
                continue;
            }else{
                c+=1;
                curr=arr[i];
            }
        }
        return c;
        
        
        
        
        // Your code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
