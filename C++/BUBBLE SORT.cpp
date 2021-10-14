#include<iostream>
#include<vector>

using namespace std;

void bubble_sort(vector<int> &a)
{
    for (int i = a.size(); i > 0; i--)
    {
        for (int j = 0, k = 1; k < i; j++, k++)
        {
            if (a[j] > a[k])
            {
                int swap = a[j];
                a[j] = a[k];
                a[k] = swap;
            }
        }
    }
}

int main()
{
    int alen, val;
    vector<int> a;

    cout << "Enter the number of elements : ";
    cin >> alen;
    for (int i = 0; i < alen; i++)
    {
        cin >> val;
        a.push_back(val);
    }

    bubble_sort(a);

    cout << "List of sorted elements: " << endl;
    for (int i = 0; i < alen; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}