#include <bits/stdc++.h>
using namespace std;

// The time complexity of this algorithm can be optimised to O(N).
// However, it is purely random as the sorted array can be achieved in only 1 iteration
// But theoretically even after infinite tries, no solution might come up.

// Space Complexity : O(1)
// No additional space has been used.

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void randomize (int arr[], int n)
{
    // Use a different seed value so that
    // we don't get same result each time
    // we run this program
    srand(time(NULL));
 
    // Start from the last element and swap
    // one by one. We don't need to run for
    // the first element that's why i > 0
    for (int i = n - 1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);
 
        // Swap arr[i] with the element
        // at random index
        swap(&arr[i], &arr[j]);
    }
}

bool isSorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[] = {1, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    while(true){
        bool sorted = isSorted(arr,n);
        if(i>100000){
            cout << "Breaaking the loop due too many iterations\n";
            cout << "Do not use this method for arrays having large size\n";
            return 0;
        }
        cout << "Iteration: " << i++ << "\n";
        if(sorted){
            printArray(arr, n);
            return 0;
        }
        randomize(arr,n); 
    } 
    return 0;
}
