Problem Link : https://www.codechef.com/problems/FILLGRID


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==2){
            cout << "-1 -1" << "\n";
            cout << "-1 -1" << "\n";
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout << "-1 ";
                    }
                    else{
                        cout << "1 ";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
