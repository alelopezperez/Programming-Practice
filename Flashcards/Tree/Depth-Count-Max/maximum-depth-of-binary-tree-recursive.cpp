// TIme Complexity O(N) = O(b^l)
// Space Complexity O(N) = O(b^l)
//Where l is the maximum depth of the tree
//Time To completion 5min
int maxDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int maxD = 1;
        
        maxD = max(maxDepth(root->left)+1, maxDepth(root->right)+1);
        
        return maxD;
        
}

int maxDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int maxD = 1;
        maxD = max(maxD, maxDepth(root->right)+1);
        maxD = max(maxD, maxDepth(root->left)+1);

        return maxD;
}
