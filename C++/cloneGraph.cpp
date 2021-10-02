#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;
typedef long long int ll;
typedef vector<int> vi;
const int inf = INT_MAX;
typedef UndirectedGraphNode Node;
/*
This code makes a deep copy of a given graph
*/


struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};
UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
    UndirectedGraphNode *A = node;
    queue<UndirectedGraphNode*> q;
    q.push(node);
    unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> m1;
    m1[node] = new Node(node->label);
    while(!q.empty()){
        Node *s = q.front();
        q.pop();
        for(UndirectedGraphNode *i : s->neighbors){
            if(m1.find(i) == m1.end()) {
                UndirectedGraphNode *tmp  = new UndirectedGraphNode(i->label);
                m1[i] = tmp;
                q.push(i);
            }
            m1[s]->neighbors.push_back(m1[i]);
        }
    }
    return m1[node];

}
