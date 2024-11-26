// Contributed by Ankit Kumar Srivastava for Hacktoberfest 2021

#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (ll i = a; i <= b; i++)
typedef long long int ll;
using namespace std;

// Made a class node containing data and previous poller as
// we are using tail poller

class Node{
public:
	ll data;
	Node* prev;
	Node(ll n)
	{
		data = n;
		prev = NULL;
	}
};

void Multiply(Node* tail, ll n)
{
	Node *temp = tail,
		*prevNode = tail; // Temp variable for keeping tail
	ll carry = 0;
	while (temp != NULL) {
		ll data = temp->data * n + carry;
		temp->data = data % 10; // stores the last digit
		carry = data / 10;
		prevNode = temp;
		temp = temp->prev; // Moving temp by 1 prevNode will
						// now denote temp
	}
	// If carry is greater than 0 then we create another
	// node for it.
	while (carry != 0) {
		prevNode->prev = new Node((ll)(carry % 10));
		carry /= 10;
		prevNode = prevNode->prev;
	}
}

void printing(Node* tail)
{
	if (tail == NULL) // Using tail recursion
		return;
	printing(tail->prev);
	cout
		<< tail->data; // printing linked list in reverse order
}

// Driver code
signed main()
{
	ll n;
	cin >> n;
	Node tail(1); // Create a node and initialise it by 1
	rep(i, 2, n)
		Multiply(&tail, i); // Run a loop from 2 to n and
							// multiply with tail's i
	printing(&tail); // printing the linked list
	cout << endl;
	return 0;
}
