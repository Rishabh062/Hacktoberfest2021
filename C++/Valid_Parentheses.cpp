/*
    Leetcode Question 20.

    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    1.Open brackets must be closed by the same type of brackets.
    2.Open brackets must be closed in the correct order.


Time complexity: O(|s|)
Space complexity: O(|s|)
Concept: Stack
*/



class Solution {
public:
    bool isValid(string s) {
        // The main DS for the problem
        stack<char> st;

        // Creating map so that it is easier to make the check condition for similar type of bracket
        unordered_map<char,char> mp;
        mp.insert({')','('});
        mp.insert({'}','{'});
        mp.insert({']','['});
        for(int i=0;i<s.size();i++){
            if((!st.empty()) && mp.find(s[i])!=mp.end() &&st.top()==mp[s[i]])st.pop();
            else st.push(s[i]);
        }
        // If the stack is empty, then it means, everything found perfect pairs and is valid else invalid
        return st.size() == 0;
    }
};