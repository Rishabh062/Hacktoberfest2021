#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int element)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < element)             //Jumping to the blocks untill the arr[i] < element
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
        {
            return -1;
        }
    }
    while (arr[prev] < element)                         //Linear search to the reqd element
    {
        prev++;
        if (prev == min(step, n))
        {
            return -1;
        }
    }
    if (arr[prev] == element)                           //returning the element index
    {
        return prev;
    }
    return -1;
}

int main()
{
    int n, element;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> element;
    cout << search(arr, n, element) << endl;
    return 0;
}
