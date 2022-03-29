
#include <iostream>
using namespace std;

int main(){
    int n,m,range;
    cin>>n>>m>>range;
    
    for (int i = 1;i<=range;i++){
        int c = n+m;
        m = n;
        n = c;
        cout<<c<<endl;
    }

    return 0;
}
