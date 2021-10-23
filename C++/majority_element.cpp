/*
Problem statement: Given an array of n elements check whether it has a majority element or not.

If yes print the element else print "no majority element"

majority element : An element which occurs more n/2 times in an array, where n is the size of the array
*/

#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Worst case
// Brute Force algorithm - Using 2 nested loops counting frequency of each element
// Time complexity : O(n*n)
// Space complexity: O(1)

int findMajorityElementBruteForce(int arr[],int n) {
    int count = 0;
    
    // counting occurences/frequency of each element
    for(int i = 0; i < n; i ++) {
        count = 0;
        
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }        
        }
        
        if(count > n/2)
            return arr[i];
    }
    
    return -1;
}

// Approach 2 : Average case
// Sorting - Sorting array elements so all same element will be consecutive, counting frequency of elements
// Time complexity: O(n*logn)
// Space complexity: O(logn) - built-in sort function uses quicksort
// space complexity of quicksort - O(logn) - best case or O(n) - worst case

int findMajorityElementSorting(int arr[], int n) {
    
    int count = 0;
    
    // sorting array elements so all same element will be consecutive
    sort(arr, arr+n);
    
    // counting frequency of elements
    for(int i = 0; i < n-1; i++) {
        if(arr[i] == arr[i+1])
            count++;

        if(count >= n/2)
            return arr[i];
    }
    
    return -1; 
}
 
// Approach 3 : Best case
// Boyer-Moore Vote algorithm - selecting a candidate element for majority element, then counting its frequency
// Time complexity: O(n)
// Space complexity: O(1)
int findMajorityElementBoyerMooreVote(int arr[],int n) {
    int count = 0;
    int candidate = 0;
    	
    // selecting a candidate element for majority element
    for(int i = 0; i < n ;i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            if(candidate == arr[i]) {
                count++;
            } else {
                count--;
            }
        }
    }
    
    if(count == 0)
        return 0;
    
    count = 0;
    
    // counting frequency/occurences of candidate
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate)
            count++;
    }
    
    return (count > n/2) ? candidate : 0;
}

void check(int res) {
    if(res != -1) {
        cout<<"Majority element: "<<res<<endl;
    } else {
        cout<<"No Majority element: "<<endl;
    }
}

int main()
{
    int n = 0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int choice = 0;
    int res = 0;
    
    while(1) {
        
        cout<<"\n1] Find majority element using Brute Force"<<endl;
        cout<<"2] Find majority element using Sorting"<<endl;
        cout<<"3] Find majority element using Boyer-Moore Vote algorithm"<<endl;
        cout<<"4] Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        
        switch(choice) {
            case 1:
                res = findMajorityElementBruteForce(arr, n);
                check(res);
                break;
                
            case 2:
                res = findMajorityElementSorting(arr, n);
                check(res);
                break;
                
            case 3:
                res = findMajorityElementBoyerMooreVote(arr, n);
                check(res);
                break;
                
            case 4:
                exit(0);
                break;
                
            default:
                cout<<"\nWrong choice"<<endl;
            
        }
        
    }
    
    return 0;
}
