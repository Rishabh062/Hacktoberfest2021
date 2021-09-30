/*

Height of AVL Tree always log(n)
Every AVL is a BST

Single rotation -
LL, RR

Double rotation -
LR, RL (single rotation is applied in double rotation)

*/
#include <bits/stdc++.h>
using namespace std;

class node {
	public:
		int data, height;  // height = balance factor
		node *left, *right;
};

node* NewNode(int data) {
	node *nn;
	nn = new(node);
	nn->left=NULL;
	nn->right=NULL;
	nn->height=1;
	nn->data=data;
	return nn;
}

int Height(node *root) {
	if(root == NULL)
	return 0;
	return root->height;
	}
	
int max(int a, int b){
	return a>b?a:b;
}

int GetBalance(node *root) {
	if(root == NULL)
	return 0;
	
	return Height(root->left)-Height(root->right);
}

node *LeftRotation(node *y) {
	node *x = y->left;
	node *t2 = x->right;
	x->right = y;
	y->left = t2;
	
//	update height
	y->height = 1+max(Height(y->left),Height(y->right));
	x->height = 1+max(Height(x->left),Height(x->right));
	return x;
}
node *RightRotation(node *x) {
	node *y = x->right;
	node *t2 = y->left;
	y->left = x;
	x->right = t2;
	
	x->height = 1+max(Height(x->left),Height(x->right));
	y->height = 1+max(Height(y->left),Height(y->right));
	return y;
}

node * Insert(node *root, int data) {
	if(root==NULL)
	return NewNode(data);
	if(root->data > data)
	Insert(root->left, data);
	else if(root->data < data)
	Insert(root->right, data);
	else return root;
	
	root->height = 1+max(Height(root->left),Height(root->right));
	
	int balance = GetBalance(root);
	
	if(balance > 1 && data < root->left->data) // LL Rotation
	return LeftRotation(root);
	
	if(balance < -1 && data > root->right->data) // RR Rotation
	return RightRotation(root);
	
	if(balance > 1 && data > root->left->data) { // LR Rotation First call right then left rotation
		root->left = RightRotation(root->left);
		return LeftRotation(root);
	}
	
	if(balance < -1 && data < root->right->data) { // RL Rotation First call left then right rotation
		root->right = LeftRotation(root->right);
		return RightRotation(root);
	}
	
	return root;
	
}

void Preorder(node *root) {
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
int main()
{
	node * root=NULL;
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 30);
	Preorder(root);
	return 0;
}
