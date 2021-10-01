#include <iostream>
#include <stack>
#include <climits>
using namespace std;

bool isValid(string S) {

    stack <char> st;
    bool ans = true;
    for(int i=0; i<S.size(); i++) {
        if(S[i] == '(' || S[i] == '{' || S[i] == '[') {
            st.push(S[i]);
        }
        else if(S[i] == ')') 
        {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } 
            else {
                ans = false;
                break;
            }
        }
        else if(S[i] == ']') 
        {
            if(!st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if(S[i] == '}')
        {
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()) {
        return false;
    } 
    else {
        return ans;
    }   
}

int main() {
   string str;
   cout<< "Enter the paranthesis to be checked "<<endl;
   cin>>str;
   if(isValid(str)) {
       cout<< "The paranthesis expression are balanced "<< endl;
   } 
   else {
       cout<< "The paranthesis expression are unbalanced "<<endl;
   }
   return 0;
}
