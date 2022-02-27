//write a program of bst , the values enter as integer in following sequence 44,10,22,35,17,40
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int value)
{
    struct node *Newnode = (struct node *)malloc(sizeof(struct node));
    Newnode->data = value;
    Newnode->left = NULL;
    Newnode->right = NULL;
    return Newnode;
}
struct node *search(struct node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    else if (root->data < key)
    {
        return search(root->right, key);
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
}
struct node *takedata(struct node *node, int key)
{
    if (node == NULL)
        return newnode(key);
    if (key < node->data)
        node->left = takedata(node->left, key);
    else if (key > node->data)
        node->right = takedata(node->right, key);
    return node;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {

        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *root = NULL;
    root = takedata(root, 36);
    takedata(root, 25);
    takedata(root, 10);
    takedata(root, 44);
    takedata(root, 42);
    takedata(root, 45);
    takedata(root, 51);
    printf("preorder of the tree is:- ");
    preorder(root);
    int n;
    printf("\nenter item to search!:- ");
    scanf("%d", &n);
    printf("the address of %d is %d", *search(root, n), search(root, n));
}