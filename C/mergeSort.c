//Problem statement: Merge sort for an array
//Complexity: Time complexity of Merge Sort is  θ(nLogn)
#include<stdio.h>
void printArray(int* A, int high){ //function to print array
    for(int i=0; i<high; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int* A, int mid, int low, int high){
    int i, j, k, B[100];
    i=low, j=mid+1;
    k = low;
    // Merge the B arrays back into A[left..right]
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k] = A[i];
            k++; i++;
        }
        else{
            B[k] = A[j];
            k++; j++;
        }
    }
    //Add remaining elements
    while(i<=mid){
        B[k] = A[i];
        k++; i++;
    }
    while(j<=high){
        B[k] = A[j];
        k++; j++;
    }
    //Copying the resulted array to given array
    for(int i=0; i<=high; i++){
        A[i] = B[i];
    }
}
// low is for left index and high is
// right index of the sub-array
// of A to be sorted
void mergeSort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    printf("Given array:");
    printArray(b, n);
    printf("Sorted array:");
    mergeSort(b, 0, n-1);
    printArray(b, n);
}
