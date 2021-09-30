#include <bits/stdc++.h>

using namespace std;

void binarySearch(int arr[], int n, int num)
{
    int right = n - 1, left = 0, mid = 0;
    int i = 0;
    bool found = false;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == num)
        {
            bool found = true;
            cout << "element found at position: " << mid << "\n";
            return;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (found == false)
    {
        cout << "Element not found\n";
    }
}

int main()
{
    int n, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search\n";
    cin >> num;
    binarySearch(arr, n, num);
}