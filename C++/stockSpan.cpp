/*
Question link: https://leetcode.com/problems/online-stock-span/

Problem Statement: 
    The stock span problem is a financial problem where we have a series of n daily price
    quotes for a stock and we need to calculate span of stock’s price for all n days. 
    The span Si of the stock’s price on a given day i is defined as the maximum number 
    of consecutive days just before the given day, for which the price of the stock on 
    the current day is less than or equal to its price on the given day. 

Input: price[] = {100, 80, 60, 70, 60, 75, 85}
Output: span[] = {1, 1, 1, 2, 1, 4, 6}

Approaches:
    1. Brute Force: Using two loops: For every element, traverse all elements on the left of it 
       to find the nearest greater element to the left.
       TC = O(N^2), for running 2 loops ; SC = O(1).

    2. Efficient approach: Using Stack: Maintain a stack to store the index of the element.
       Pop the elements when the price of the stock was less than or equal to price[i] 
       and then push the value of day i back into the stack.
       TC = O(N) ; SC = O(N).
*/

#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int price[], int size, int span[]) {

	stack<int> st;    	       // Create a stack and push index of first element to it
	st.push(0);

	span[0] = 1;               // Span value of first element is always 1

	for (int idx = 1; idx < size; idx++) {
		
        // Keep popping till you find the nearest greater element to the left.
		while (!st.empty() && price[st.top()] <= price[idx])  
			st.pop();

		if(st.empty())
            span[idx] = idx + 1;
        else
            span[idx] = idx - st.top();

		st.push(idx);          // Push this element to stack
	}
}

//Funtion to print the span values.
void printSpan(int arr[], int size) {
	for (int idx = 0; idx < size; idx++)
		cout << arr[idx] << " ";
    cout << endl;
}

//The driver function
int main() {
	int price[] = {100, 80, 60, 70, 60, 75, 85};
	int size = sizeof(price) / sizeof(price[0]);
	int span[size];           // Stores the span values.

	calculateSpan(price, size, span); 
	printSpan(span, size);    // Print the calculated span values

	return 0;
}
