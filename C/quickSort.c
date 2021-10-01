#include<stdio.h>
int swap = 0;
void printArray(int A[], int n){
    printf("Array:");
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high){
    int pivot = A[low];
    int temp;
    int i = low+1;
    int j = high;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while (A[j]>pivot){
            j--;
        }
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            swap++;
        }
        // printArray(A, 6);
    }while(i<j);
    //swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    swap++;
    return j;
}
void quickSort(int A[], int low, int high){
    int partitionIndex; //index of pivot after partition
    if(low<high){
        partitionIndex = partition(A, low, high);
        // printf("partition index: %d", A[partitionIndex]);
        quickSort(A, low, partitionIndex-1); //sort left subarray
        quickSort(A, partitionIndex+1, high); //sort right subarray
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    quickSort(b, 0, 5);
    printArray(b, 6);
    printf("Swaps:%d", swap);
    return 0;
}
