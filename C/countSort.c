//Problem statement: Count sort for an array
//Its running time complexity is O(n)
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printArray(int* A, int high){ //function to print array
    for(int i=0; i<high; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int maximum(int A[], int n){ //find maximum element from array
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}
void countSort(int *A, int n){
    int max = maximum(A, n);
    int *count = (int *)malloc((max+1)*(sizeof(int))); //Create an array to count elements of array
    for(int i=0; i<=max; i++){
        count[i] = 0;
    }
    // Store count of each character
    for(int i=0; i<n; i++){
        count[A[i]]= count[A[i]]+1;
    }
    // Build the output array
    int i=0, j=0;
    while(i<=max){
        if(count[i]>0){
            A[j] = i;
            count[i] = count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    printArray(b, n);
    countSort(b, n);
    printArray(b, 6);
}
