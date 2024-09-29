### Code:<br>
```cpp
// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;
 
/* Function to sort an array using insertion sort*/
void insertionSort(vector<int>&arr)
{
    int i, key, j;
    for (i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(vector<int>arr)
{
    int i;
    for (i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/* Driver code */
int main()
{
    /*taking user input*/
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    /*calling the functions*/
    
    insertionSort(arr);
    printArray(arr);
 
    return 0;
}
```
### Output:<br>
```
enter the size of array
7
enter the elements of array
3 2 0 5 10 9 4
0 2 3 4 5 9 10 

```



