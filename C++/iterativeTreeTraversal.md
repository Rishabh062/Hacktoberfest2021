• pre-order: first process the root, then traverse the left subtree, then
traverse the right subtree.

• in-order: first traverse the left subtree, then process the root, then traverse
the right subtree.

• post-order: first traverse the left subtree, then traverse the right subtree,
then process the root
```cpp
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder; 
        stack<TreeNode*> st; 
        st.push(root);
        while(!st.empty()){
            root = st.top();   st.pop(); 
            preorder.push_back(root->val); 
            if(root->right != NULL)
                st.push(root->right);
            if(root->left!= NULL)
                st.push(root->left);
        }
        return preorder; 
    }
    
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)
            return ans;
        stack<TreeNode*> st;
        TreeNode *temp=root;
        while(!st.empty() || temp){
            while(temp){
                st.push(temp);
                temp=temp->left;
            }
            temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            temp=temp->right;
        }
        return ans;
    }
    
vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)
            return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            auto temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left)st.push(temp->left);
            if(temp->right)st.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
```
    
