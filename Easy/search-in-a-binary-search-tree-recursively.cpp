//Time Complexity O(log2(n))
//Space Complexity O(N) recursive stack
//Time to completion 15min
TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==NULL)
            return NULL;
        
        if(root->val==val)
            return root;
        
        if(val < root->val){
            return searchBST(root->left,val);
        }
                                
        else{
            return searchBST(root->right, val);
        }        
}
