#include <iostream>
#include <string>
using namespace std;

#include "solution.h"
#include<stack>

bool checkRedundantBrackets(string str) {
    stack<char> stk;
    for (auto& ch : str) {
        if (ch == ')') {
            char temp = stk.top();
			      stk.pop();
            int flag = 1 ;
            while (!stk.empty() and temp != '(') {
				        if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
					          flag = 0;
                temp = stk.top();
				        stk.pop();
			      }
            if (flag == 1)
				        return true;
        }
        else
			      stk.push(ch);
    }
	  return false;
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}
