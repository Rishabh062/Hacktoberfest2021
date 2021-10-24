
#include<iostream>
using namespace std;

int Partition(int a[],int start,int end){ // Function to find the index of the pivot element
        int pivot = a[end];   // last element is chosen as pivot element
        int pIndex= start;

        for(int i = start;i<end;i++){
            if(a[i]<=pivot){
                swap(a[i],a[pIndex]);
                pIndex++;
            }
        }
        swap(a[pIndex],a[end]);
        return pIndex;          // returning the index of the pivot element
}

void Quick_Sort(int a[],int start,int end){
    if(start<end){
        int pivot = Partition(a,start,end);   // The index of the pivot element is stored in variable pivot
        Quick_Sort(a,start,pivot-1);  
        Quick_Sort(a,pivot+1,end);
    }
}
int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int start=0,end=n-1;
    Quick_Sort(a,start,end);

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";        // displaying the sorted array
    }
}

/*

 Sample Input:  
 6
 10 7 8 9 1 5

 Sample Output: 

 1 5 7 8 9 10

*/ 
