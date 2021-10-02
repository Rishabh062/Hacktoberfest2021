//Problem statement: Selection sort to sort an array
//Time complexity: O(n*n)
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
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    selectionSort(b, n);
    printArray(b, n);
}
