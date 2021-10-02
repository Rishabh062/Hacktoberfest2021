#include<stdio.h>
void selectionSort(int *A, int n){
    int indexOfMin, temp;
    for(int i=0; i<n-1; i++){ // loop for passes
        indexOfMin = i;
        for(int j=i+1; j<n; j++){ //loop for comparison of each element
            if(A[j]<A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i]; //swapping of each element
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
void printArray(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main(){
    int A[] = {6, 2, 9, 56, 90, 12};
    int n = 6;
    printArray(A, 6);
    selectionSort(A, 6);
    printArray(A, 6);
    int B[] = {1, 2, 3, 4, 5, 6};
    selectionSort(B, 6);
    printArray(B, 6);
}