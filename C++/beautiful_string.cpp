#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) 
{
    int n = str.length();
    int t1 = 0, t2 = 0;
    char s1 = '0', s2 = '1';

    for (int i = 0; i < n; i++) 
    {
        if (str[i] == '1') 
        {
            if (s1 == '0') 
            {
                t1++;
            }
            else {
                t2++;
            }
        }
        else 
        {
            if (s1 == '1') 
            {
                t1++;
            }
            else 
            {
                t2++;
            }
        }
        if (s1 == '1') 
        {
            s1 = '0';
            s2 = '1';
        }
        else 
        {
            s1 = '1';
            s2 = '0';
        }
    }
    return min(t1, t2);
}

int main()
{
    int test;
    cout<<"Enter total testcases: "<<endl;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        cout<<makeBeautiful(str)<<endl;
    }
    return 0;
}