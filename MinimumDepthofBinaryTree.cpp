class Solution {
public:
  
    int mini=INT_MAX;
    
    void miniDepth(TreeNode*root,int count){
        
        if(!root)return ;
        
        count=count+1;
        
        if(!root->left && !root->right) mini=min(mini,count); 
            
        miniDepth(root->left,count);
        miniDepth(root->right,count);

    }
    
    int minDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        miniDepth(root,0);
        
        return mini;
    }
};
