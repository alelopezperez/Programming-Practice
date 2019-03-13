//https://leetcode.com/problems/symmetric-tree/
//Time Complexity O(N) I only traverse the tree once
//Space Complexity O(N) the recursive stack
// Here i learned that i just needed to treat the initial left and right node as it own separate tree
// and check that those two nodes(trees) are the same symmetricly(meanins instead of left->left ==right->right)
// left->left == right->right
// also i got error when checking my node to null since i wrote != insetead of ==
//Time to completion 60min
bool symmetric(TreeNode* left, TreeNode*right){
        if(left==NULL && right==NULL)
            return true;        
        
        if(left==NULL || right==NULL) 
            return false;
        
        return  (left->val==right->val)&&symmetric(left->left, right->right) && symmetric(left->right, right->left);
  
            
}
bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return symmetric(root->left, root->right);
        
}
