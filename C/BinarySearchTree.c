//BST IMPLEMENTATION USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

// A binary tree node has a pointer to left child, information and a pointer to right child
struct node
{
    struct node *left;
    int info;
    struct node *right;
};
typedef struct node *bstnode;

// Function to Insert a node in BST
bstnode Insert(bstnode t, int x)
{
    if(t==NULL)
    {
        t=(bstnode)malloc(sizeof(struct node));
        if(t==NULL)
        {
            printf("\nOUT OF MEMORY");
            return;
        }
        else
        {
            t->info=x;
            t->left=NULL;
            t->right=NULL;
        }
    }
    else
    {
        if(x < t->info)
            t->left=Insert(t->left,x);
        else
        {
            if (x > t->info)
                t->right=Insert(t->right,x);
        }
    }
    return t;
}

// Function for In-order Traversal
void Inorder (bstnode t)
{
    if(t!=NULL)
    {
        Inorder(t->left);
        printf("%d\t",t->info);
        Inorder(t->right);
    }
}

// Function for Pre-order Traversal
void Preorder (bstnode t)
{
    if(t!=NULL)
    {
        printf("%d\t",t->info);
        Preorder(t->left);
        Preorder(t->right);
    }
}

// Function for Post-order Traversal
void Postorder(bstnode t)
{
    if(t!=NULL)
    {
        Postorder(t->left);
        Postorder(t->right);
        printf("%d\t",t->info);
    }
}

// Function to Find the smallest element in BST
bstnode Findmin(bstnode t)
{
    if(t==NULL)
        return NULL;
    else
    {
        if(t->left==NULL)
            return t;
        else
            return (Findmin(t->left));
    }
}

// Function to Find the Largest element in BST
bstnode Findmax(bstnode t)
{
    if(t==NULL)
        return NULL;
    else
    {
        if(t->right==NULL)
            return t;
        else
            return (Findmax(t->right));
    }
}

// Function to Delete a node of BST
bstnode Delete(bstnode t, int x)
{
    bstnode temp;
    if(t==NULL)
        printf("\n%d IS NOT FOUND IN THE BST\n",x);
    else
    {
        if(x<t->info)
            t->left=Delete(t->left,x);
        else
        {
            if(x>t->info)
                t->right=Delete(t->right,x);
            else
            {
                if(t->left && t->right)
                {
                    temp=Findmin(t->right);
                    t->info=temp->info;
                    t->right=Delete(t->right,t->info);
                }
                else
                {
                    temp=t;
                    if(t->left==NULL)
                        t=t->right;
                    else if(t->right==NULL)
                        t=t->left;
                    free(temp);
                }
            }
        }
    }
    return t;
}

// Function to Search for an element in BST
bstnode Search(bstnode t, int x)
{
    if(t==NULL)
        return NULL;
    if(x<t->info)
            return Search(t->left,x);
    else
    {
         if(x>t->info)
                return Search(t->right,x);
         else
                return t;

    }
}

// Main Function
void main()
{
    bstnode root=NULL,temp;
    int x,ch=1;
    while (ch!=0)
    {
        printf("\n1.INSERT\n2.DELETE\n3.SEARCH\n4.INORDER TRAVERSAL\n5.PREORDER\n6.POSTORDER\n7.FINDMIN\n8.FINDMAX\n0.QUIT\n");
        printf("\nENTER YOUR CHOICE\t: ");
        scanf("%d",&ch);
        // Proceed according to user's choice
        switch(ch)
        {
            case 1: printf("\n Enter element to be inserted\t");
                    scanf("%d",&x);
                    root=Insert(root,x);
                    break;
            case 2: if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                     {
                        printf("\n Enter element to be deleted\t");
                        scanf("%d",&x);
                        root=Delete(root,x);
                     }
                    break;
            case 3: if(root==NULL)
                      printf("\nBST IS EMPTY\n");
                    else
                    {
                        printf("\n Enter element to be searched\t");
                        scanf("%d",&x);
                        temp=Search(root,x);
                        if(temp!=NULL)
                            printf("\n%d IS FOUND\n",x);
                        else
                            printf("\n%d IS NOT FOUND\n",x);
                    }
                        break;
            case 4:  if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                        Inorder(root);
                    break;
            case 5: if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                        Preorder(root);
                    break;
            case 6 : if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                        Postorder(root);
                    break;
            case 7: if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                     {
                         temp=Findmin(root);
                         if(temp!=NULL)
                            printf("\nSMALLEST ELEMENT IS %d\n",temp->info);
                     }
            case 8: if(root==NULL)
                        printf("\nBST IS EMPTY\n");
                     else
                     {
                         temp=Findmax(root);
                         if(temp!=NULL)
                            printf("\nLARGEST ELEMENT IS %d\n",temp->info);
                     }
            case 0: break;  // Exit the loop
            default: printf("\nWRONG CHOICE");  // Invalid choice
        }
    }
    return 0;
}
