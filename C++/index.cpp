#include <iostream>
#include <vector>
using namespace std;


void Medmed(vector<int> arr,int n,int k){
    int Rand = rand()%n;
    int Random=arr[Rand];
    std::vector<int> S;
    std::vector<int> L;
    for(int x=0;x<n;x++){
        if(arr[x]<Random){
            S.push_back(arr[x]);
        }
        else if(arr[x]>Random){
            L.push_back(arr[x]);
        }
    }
    if((S.size()+1)==k){
        cout<<Random;
    }
    else if((S.size()+1)<k){
        Medmed(L,L.size(),k-1-S.size());
    }
    else if((S.size()+1)>k){
        Medmed(S,S.size(),k);
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> g1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        g1.push_back(a);
    }
    Medmed(g1,n,k);
    
    return 0;
}
