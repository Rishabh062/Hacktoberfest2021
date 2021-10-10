#include<bits/stdc++.h>
using namespace std;
 
void MaxHeapify(int arr[], int i, int n)
{
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;
    if (l < n && arr[l] > arr[i])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, largest, n);
    }
}
 
void convertMaxHeap(int arr[], int n)
{
    for (int i = (n-2)/2; i >= 0; --i)
        MaxHeapify(arr, i, n);
}
 

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}
 
int main()
{
    int arr[] = {-1, 5, 4, 3, 8, -9, 12, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("Min Heap array : ");
    printArray(arr, n);
 
    convertMaxHeap(arr, n);
 
    printf("\nMax Heap array : ");
    printArray(arr, n);
 
    return 0;
}
