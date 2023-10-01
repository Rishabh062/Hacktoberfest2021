#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int total = 0;

    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j=i; j<n; j++){
            sum += arr[j];
        }
        total += sum;
    }
    cout<<"Total "<<total<<endl;
    return 0;
}
