/* Problem Statement: Ninja has been given a binary string ‘STR’ containing either ‘0’ or ‘1’. A binary string is called beautiful if it contains alternating 0s and 1s.
For Example:‘0101’, ‘1010’, ‘101’, ‘010’ are beautiful strings.
He wants to make ‘STR’ beautiful by performing some operations on it. In one operation, Ninja can convert ‘0’ into ‘1’ or vice versa.
Your task is to determine the minimum number of operations Ninja should perform to make ‘STR’ beautiful.

Time Complexity: O(n) 
*/

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
