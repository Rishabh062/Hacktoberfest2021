#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int *a, int l, int h, int x)
{
    if (h >= l) {
        int mid = l + (h - l) / 2;
 
        if (a[mid] == x){
            return mid;
        }
        if (a[mid] > x){
            return binarySearch(a, l, mid - 1, x);
        }

        return binarySearch(a, mid + 1, h, x);
    }
    
    return -1;
}
 
int main()
{
    int x,n;
    cout<<"Enter the no. of elements = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array = \n\n";
    
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>arr[i];
    }

    cout<<"Enter the Elements for search = ";
    cin>>x;
    
    int result = binarySearch(arr, 0, n - 1, x);

    if(result == -1){
        cout<<"Element not present in the array!!\n\n";
    }else{
        cout<<"Element present in the array at the index = "<<result;
    }

    return 0;
}
