#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout<<"Enter the number of elements in the array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in the array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
