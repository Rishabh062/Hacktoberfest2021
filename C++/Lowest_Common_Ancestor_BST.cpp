
// Below is the function to find lowest common ancestor in a BST
Node* LCA(Node *root, int n1, int n2)
{
   if(root->data>n1 && root->data>n2){
      return LCA(root->left, n1, n2);
   }
   else if(root->data<n1 && root->data<n2){
       return LCA(root->right, n1, n2);
   }
   else{
       return root;
   }
}
