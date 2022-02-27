//Quick sort using C++
#include<iostream>
using namespace std;

void swap(int* a, int* b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  
  
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (arr[j] < pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
 
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
void display(int arr[], int size)  
{   
    for (int i = 0; i < size; i++){ 
        cout << arr[i] << " "; 
    }     
    cout << endl;  
} 

int main()  
{  
    int a[] = {12, 7, 6, -9, 2, 4};  
    int n = sizeof(a) / sizeof(int);  
    cout << "Unsorted array: ";
    display(a,n);
    quickSort(a, 0, n - 1);
    cout << "Sorted array: ";  
    display(a,n);  
    return 0;  
}  