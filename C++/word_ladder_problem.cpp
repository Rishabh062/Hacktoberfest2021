/*
PROBLEM STATEMENT
Given two words, startWord and endWord, and a dictionary wordList,
return the length of the SHORTEST Transformation sequence from startWord to endWord
Also,startWord,beginWord and words in the word list have same length
The words in list are not same
Example:
startWord = "dot", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
The shortest transformation is dot->dog->cog hence answer is 3 
*/
#include<bits/stdc++.h>
using namespace std;
//check function to see if the two words have any letter in common 
bool check(string a,string b){
        if(a.size()!=b.size())
            return false;
        int cnt=0;
        for(int i=0;i!=a.size();i++){
            if(a[i]!=b[i])
                cnt++;
            if(cnt>=2)
                return false;
        }
        return (cnt==0)?0:1;
}
int TransformLength(string begin, string end, vector<string>& list) {
//if end word is not present in the list we can't find the length of transfromation
if(find(list.begin(),list.end(),end)==list.end())
        return 0;
// we want to create first the unweighted and undrirected graph
// so that we can reach find shortest path to reach from startword to end word       
// if begin word is not present in list we add it to list so that we can create list of words corresponding to beginWord 
if(!(find(list.begin(),list.end(),begin)!=list.end()))
        list.insert(list.begin(),begin);
int n=list.size();
unordered_map<string,bool> visited;
unordered_map<string,vector<string>>graph;
//creating graph
//for given word adding further words which have few letters same
for(int i=0;i!=n;i++){
            for(int j=i+1;j!=n;j++){
                if(check(list[i],list[j])){
                    graph[list[i]].push_back(list[j]);
                    graph[list[j]].push_back(list[i]);}
            }
}
//visited map to avoid revisits
for(int i=0;i<list.size();i++){visited[list[i]]=false;}
queue<pair<int,string>>q;//queue having transformation length and words 
q.push({1,begin});
//bfs on created graph
//bfs ensures shortest path for graph
while(q.size()){
    auto [c,u]=q.front();q.pop(); 
        if(u==end)
                return c;
        if(visited[u])
                continue;
        visited[u]=true;
        //visiting neighbours for transformation sequence
        for(auto i:graph[u]){
               string nbr=i;
               if(!visited[nbr])
                   q.push({c+1,nbr});
            }
        }
        return 0;
}
int main(){
string startWord,endWord;
//input the start and end words
cin>>startWord>>endWord;
//input length of the dictionary of words
int n;
cin>>n;
//input  the dictionary of words
vector<string>wordList(n);
for(int i=0;i!=n;i++){
    cin>>wordList[i];
}
cout<<TransformLength(startWord,endWord,wordList)<<endl;
}

