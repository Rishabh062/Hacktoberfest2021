class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> ans;
	    
	    queue<int> q;
	    q.push(0);
	    bool vis[V];
	    memset(vis,0,sizeof(vis));
	    while(!q.empty()){
	        int n = q.size();
	        for(int i=0 ;i<n ;i++){
	            int curr = q.front(); q.pop();
	            ans.push_back(curr);
	            vis[curr]=1;
	            
	            for(auto it = adj[curr].begin() ;it!=adj[curr].end() ;it++){
	                if(!vis[*it]){
	                    vis[*it]=1;
	                    q.push(*it);
	                }
	            }
	        }
	    }
	    return ans;
	}
};