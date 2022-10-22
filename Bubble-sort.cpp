#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *a, int n)
{

    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int n;
    cout << "Enter the number of Elements = ";
    cin >> n;
    int a[n];
    cout << "Enter the elemets of array = \n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    bubble_sort(a, n);

    cout << "\nThe sorted array = \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
