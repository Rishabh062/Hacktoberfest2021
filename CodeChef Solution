#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
/*

Idea -- Both of them will work in same mine because if both are in different mines and one is getting 
gold then other will switch to his mine to stop hime from getting more gold .
*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        
        double x=0;
        double y=0;
        for(ll i=0;i<n;i++){
            ll g,a,b;
            cin>>g>>a>>b;
            
            x+=(double)(g*b)/(double)(a+b);
            y+=(double)(g*a)/(double)(a+b);
        }
        
        cout<<fixed<<setprecision(10)<<x<<" "<<y<<"\n";
    }
    
}




