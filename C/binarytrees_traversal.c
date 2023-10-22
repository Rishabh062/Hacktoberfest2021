/*pre-order, in-order, post-order traversals on binary trees*/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
	};

struct node* newnode(int value) {
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data=value;
	new->left=NULL;
	new->right=NULL;
	return(new);
}

void preorder(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void postorder(struct node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}


void main()
{
	struct node*root;
	root=newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->right = newnode(7);
	
	printf("Pre order traversal: \n");
	preorder(root);
	printf("\n");
	printf("\nIn order traversal: \n");
	inorder(root);
	printf("\n");
	printf("\nPost order traversal: \n");
	postorder(root);
	printf("\n");
}
