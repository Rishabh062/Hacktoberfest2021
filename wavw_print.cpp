#include<iostream>
using namespace std;
void print(int arr[][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void wave_print(int arr[][100], int r, int c){
    for(int col = 0; col<c; col++){
        if(col%2==0){
            for(int row= 0; row<=r-1; row++){
                cout<< arr[row][col] <<"  ";
            }
        }

        else{
            for(int row=r-1; row>=0; row--){
                cout<< arr[row][col]<<"  ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            cin>>arr[i][j];
        }
    }
    print(arr,n,m);
    wave_print(arr,n,m);
    
    return 0;
}
