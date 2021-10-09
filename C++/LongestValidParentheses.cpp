//Given a string containing just the characters '(' and ')', find the length of the longest 
//valid (well-formed) parentheses substring.
//A valid parentheses substring is that in which:-
//(1)Open brackets must be closed by the same type of brackets.
//(2)Open brackets must be closed in the correct order.
//Time-Complexity:-O(n) where n=length of string
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        int close = 0, open = 0, max_len = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
            }
            else {
                close++;
            }
            if (close == open) {
                max_len = max(max_len, 2 * open);
            }
            else if (close > open) {
                open = 0;
                close = 0;
            }
        }
        close = 0;
        open = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') {
                open++;
            }
            else {
                close++;
            }
            if (close == open) {
                max_len = max(max_len, 2 * open);
            }
            else if (close < open) {
                open = 0;
                close = 0;
            }
        }
        return max_len;

    }
};
int main()
{
    string s;
    cin >> s;
    Solution S;
    cout << S.longestValidParentheses(s);
    return 0;
}