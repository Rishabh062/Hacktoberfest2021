#include <iostream>
#include <string>
using namespace std;
 

string expand(string str, int low, int high)
{
    while (low >= 0 && high < str.length() && (str[low] == str[high])) {
        low--, high++;       
    }
    return str.substr(low + 1, high - low - 1);
}
 
string longestPalindromicSubstring(string str)
{
    if (str.length() == 0) {
        return str;
    }
    
    string max_str = "", curr_str;
 
    int max_length = 0, curr_length;
 
    for (int i = 0; i < str.length(); i++)
    {
    
        curr_str = expand(str, i, i);
        curr_length = curr_str.length();
 
        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_str = curr_str;
        }
 
        curr_str = expand(str, i, i + 1);
        curr_length = curr_str.length();
 
        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_str = curr_str;
        }
    }
 
    return max_str;
}
 
int main()
{
    string str = "mojologiccigolmojo";
 
    cout <<longestPalindromicSubstring(str);
 
    return 0;
}
