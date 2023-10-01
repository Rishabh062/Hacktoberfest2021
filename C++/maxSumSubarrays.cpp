#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
            sum += a[i];
            if (a[i] < 0)
            {
                sum = 0;
            }

            if(sum > max) max = sum;
    }

    cout << max << endl;

    return 0;
}