#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

struct Node{
	int data;
	Node *left, *right;
};

Node *newNode(int data){
	Node *temp = new Node();
	temp->left = temp->right = NULL;
	temp->data = data;
	return temp;
}

int IsSorted(Node *root){
	int prevMax = INT_MIN;
    int minval, maxval, levelSize;
    
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        levelSize = q.size();

        minval = INT_MAX;
        maxval = INT_MIN;

        while (levelSize > 0) {
            root = q.front();
            q.pop();
 
            levelSize--;
 
            minval = min(minval, root->data);
            maxval = max(maxval, root->data);
 
            if (root->left)
                q.push(root->left);
 
            if (root->right)
                q.push(root->right);
        }
        if (minval <= prevMax)
            return 0;
        
        prevMax = maxval;
    }
 
    return 1;
}

int main(){
	fast;
	Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->right = newNode(5);
    root->right->left = newNode(4);
    root->right->right->left = newNode(10);
    
    if(IsSorted(root)){
		cout << "Its Sorted!";
	}else{
		cout << "Its Not Sorted";
	}
	return 0;
}

// Complexity: O(N)
