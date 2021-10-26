#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int num, d;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> d;
        for (int i = d; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < d; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}
