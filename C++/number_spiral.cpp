// REFERENCE : https://www.youtube.com/watch?v=hitXO-6BbkA

#include <iostream>

using namespace std;

int main()
{
    unsigned long long int t;
    cin >> t;
    unsigned long long int* ans = new unsigned long long int[t];
    for(unsigned long long int i = 0; i < t; i++)
    {
        unsigned long long int x,y;
        cin >> y >> x;
        
        if(x > y)
        {
            if((x&1) == 1) ans[i] = x*x - y + 1;
            else 
            {
                --x;
                ans[i] = x*x + y;
            }
        }
        else
        {
            if((y&1) == 0) ans[i] = y*y - x + 1;
            else 
            {
                --y;
                ans[i] = y*y + x;
            }
        }
    }

    for(unsigned long long int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}