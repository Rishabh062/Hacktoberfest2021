/*
Problem statements:

Implement Morris In-Order Traversal for a Binary Search Tree in C++. The traversal should be done without using recursion or a stack, ensuring O(1) space complexity.



Time Complexity: O(n), where n is the number of nodes in the tree. Each node is visited twice (once to create a thread and once to remove it).

Space Complexity: O(1), since no additional space (stack or recursion) is used apart from the tree itself.

*/

#include <iostream>
using namespace std;

// Definition of TreeNode
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    // Constructor to initialize node with a value
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform Morris In-Order Traversal
void morrisInOrderTraversal(TreeNode *root)
{
    TreeNode *current = root; // Initialize current node to the root of the tree

    while (current != nullptr)
    {
        // Case 1: If current has no left child, visit this node and move to the right
        if (current->left == nullptr)
        {
            cout << current->val << " "; // Print the current node's value
            current = current->right;    // Move to the right subtree
        }
        // Case 2: If current has a left child, find the in-order predecessor
        else
        {
            TreeNode *predecessor = current->left;

            // Find the rightmost node in the left subtree (in-order predecessor)
            while (predecessor->right != nullptr && predecessor->right != current)
            {
                predecessor = predecessor->right;
            }

            // Case 2a: If the predecessor's right child is null, establish a thread
            if (predecessor->right == nullptr)
            {
                predecessor->right = current; // Create a temporary link (thread)
                current = current->left;      // Move to the left subtree
            }
            // Case 2b: If the predecessor's right child is already current, remove the thread
            else
            {
                predecessor->right = nullptr; // Remove the thread
                cout << current->val << " ";  // Visit the current node
                current = current->right;     // Move to the right subtree
            }
        }
    }
}

// Helper function to create a new TreeNode
TreeNode *createNode(int val)
{
    return new TreeNode(val);
}

// Main function to test the Morris In-Order Traversal
int main()
{
    /* Construct the following Binary Search Tree (BST):
                 4
               /   \
              2     6
             / \   / \
            1   3 5   7
    */

    TreeNode *root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->left = createNode(5);
    root->right->right = createNode(7);

    // Print the in-order traversal of the BST using Morris Traversal
    cout << "In-Order Traversal of the BST using Morris Traversal: ";
    morrisInOrderTraversal(root);
    cout << endl;

    return 0;
}

