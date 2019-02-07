//https://leetcode.com/problems/invert-binary-tree
// Time Complexity O(n) I just go thorugh the binary tree once.
//Space complexity O(n) of the recursion stack
//Time completion 10min
void invertrec(TreeNode* root){
        TreeNode* aux = root->left;
        root->left=root->right;
        root->right =aux;
        
        if(root->right!=NULL){
            invertrec(root->right);
        }
        
        if(root->left!=NULL){
            invertrec(root->left);
        }
}

TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        invertrec(root);
        return root;
}
