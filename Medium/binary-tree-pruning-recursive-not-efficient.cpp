//https://leetcode.com/problems/binary-tree-pruning/submissions/
// Time Complexity O(N)
// Space COmplexity O(N) Stack 
// Time to Completion 20min.
// I think there is a better way using post-order traversal.

bool fullzeros(TreeNode* root){
        if(root==NULL) return true;
        if(root->val==0)
            return true && fullzeros(root->left) && fullzeros(root->right);
        return false;
 
    }
TreeNode* pruneTree(TreeNode* root) {
        
        if(root==NULL) return NULL;
        if(fullzeros(root)) return NULL;

        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        return root;
        
}


bool hasone(TreeNode* root){
        if(root==NULL) return false;
        if(root->val==1)
            return true;
        return false|| fullzeros(root->left) || fullzeros(root->right);

        
        
}

TreeNode* pruneTree(TreeNode* root) {
        
        if(root==NULL) return NULL;
        if(!hasone(root)) return NULL;

        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        return root;
        
}
