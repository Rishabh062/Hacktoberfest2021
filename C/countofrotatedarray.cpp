#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        x = min(x, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << i;
        }
    }

    return 0;
}
