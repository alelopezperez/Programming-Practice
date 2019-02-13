//https://leetcode.com/problems/univalued-binary-tree/submissions/
//Time Complexity O(N) the size of the tree
//Space Complexity O(n) Recursion stack
//I learned that i need to first trust myself; also in recursion there is no BREAK;
// I need to nest all my returns with AND statement like when i learned in Programming Languages
// Time to completion 20min
bool rec(int val, TreeNode* root){
        if(root==NULL)
            return true;
        if(root->val!=val)
            return false;
        return true && rec(val, root->left) && rec(val, root->right);
}
bool isUnivalTree(TreeNode* root) {
        return rec(root->val, root->left) && rec(root->val, root->right);
}
