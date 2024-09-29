#include <iostream>

using namespace std;
int ipow(int x, int y)
{
    int z = 1;
    for(int i = 1; i <= y; i++) z=z*x;

    return z;
}
int main()
{
    int n;
    cin >> n;

    bool ans[n];
    bool gray_code[n];
    for(int i = 0; i < n; i++) 
    {
        ans[i] = true;
        gray_code[i] = true;
    }
    for(int i = 0; i < ipow(2,n); i++)
    {
        for(int j = 1; j <= n; j++) if(i%ipow(2,n-j) == 0) ans[j-1] = !ans[j-1];
        for(int j = n-1; j >= 0; j--)
        {
            if(j == 0) gray_code[j] = ans[j];
            else gray_code[j] = ans[j] ^ ans[j-1];
        }
        for(int j = 0; j < n; j++)
        {
            cout << (int)gray_code[j];
        }
        cout << endl;
    }

    return 0;
}