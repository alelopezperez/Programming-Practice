//https://leetcode.com/problems/diameter-of-binary-tree/submissions/
// Time Complexity O(N)
// Space Complexitu O(N) the stack

int helper(TreeNode* root, int& maxi){
        if(root==NULL)
            return 0;
        
        int left = helper(root->left, maxi);
        int right = helper(root->right, maxi);
   
        maxi = max(maxi, (left+right));
        
        return max(left,right)+1; 
}

int diameterOfBinaryTree(TreeNode* root) {
        int max = 0;
        helper(root,max);
        return max;
}
