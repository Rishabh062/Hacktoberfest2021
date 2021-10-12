// Dynamic Binary Search Algorithm 
//Time Complexity : O(log2n)

#include <iostream>

using namespace std; 

 // A recursive binary search function. It returns location of key in given array arr[l..r] is present, 
// otherwise -1  

int binarySearch(int arr[], int first, int last, int key) { 

    if (last >= first) { 
        int mid = (last + first) / 2; 

        if (arr[mid] == key) return mid; 

        if (arr[mid] > key) 
            return binarySearch(arr, first, mid - 1, key);  
        return binarySearch(arr, mid + 1,last, key); 
    } 
    return -1; 
} 


int main() { 
    int n,i,key;

    //Entering the size of array
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n]; 

   //Inserting the values in the array
    cout<<"Enter the values in the array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //Entering the search value
    cout<<"Enter the value to seacrh: ";
    cin>>key;


    int result = binarySearch(arr,0,n - 1, key); 

    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; // First element starting at index 0
    return 0; 
} 
