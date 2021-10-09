//cpp program to sort a array using bubble sort 

#include<iostream> 

using namespace std;

bubbleSort(int arr[], int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main(){
    int n;
    cout<<"\nEnter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){               //array input
        cout<<"\nEnter an element : ";
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){           //array output
        cout<<" "<<arr[i];
    }
}

 /* time complexity analysis

 O(n2)
 
  */