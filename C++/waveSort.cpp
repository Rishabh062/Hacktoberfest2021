#include <iostream>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);
        if (arr[i] > arr[i + 1] && (i <= (n - 2)))
            swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[] = {3, 2, 1, 4, 5, 6, 0};
    int n = 7;
    waveSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}