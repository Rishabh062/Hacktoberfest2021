
#include<iostream>
#include<queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

//accepts the old root node& data and returns the new node
node* insertInBST(node* root,int data){
	//base case
	if(root==NULL){//inserting at the leaf
		return new node(data);
	} 

	//recursive part-Insert in the subtree and update the pointers
	if(data<=root->data){
		root->left = insertInBST(root->left,data);
	}
	else{
		root->right=insertInBST(root->right,data);
	}
	return root;
}


node* buildBST(){ //reads a list of numbers till -1 and also these number will be inserted to the BST
	node*root=NULL;
	int d;
	cin>>d;
	while(d!=-1){
		root=insertInBST(root,d);
		cin>>d;
	}
	return root;
}

//same as BT
void BFStree(node* root){
	queue<node*>q;// because we want to have addresses of the children
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f=q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();

			if(!q.empty()){//to avoid infinite loop and also we have to tell na ki ab line yhaan pe khtm hoti hai agli wali :P
				
				q.push(NULL);
			}
		}

		else{
			cout<<f->data<<',';
			q.pop();
			if(f->left){// if left child is not null
				q.push(f->left);
			}
			if(f->right){// if left child is not null
				q.push(f->right);
			}
		}
	}
	return;
}

//same as BT
void printIn(node* root){
	if(root==NULL){
		return;
	}
	//left root right
	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);
} 
bool search(node* root, int data){
	//base
	if(root==NULL){
		return false;
	}
	if(root->data==data){
		return true;
	}

	//recursive part
	if(data<root->data){
		return search(root->left,data);
	}
	else{
		return search(root->right,data);
	}
}

int main(){
	node* root=buildBST();
	int s;
	cin>>s;
	if (search(root,s)){
		cout<<"present";
	}
	else{
		cout<<"Not present";
	}
}
