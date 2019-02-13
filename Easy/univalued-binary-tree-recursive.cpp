//https://leetcode.com/problems/univalued-binary-tree/submissions/
//Time Complexity O(N) the size of the tree
//Space Complexity O(n) Recursion stack
//I learned that i need to first trust myself; also in recursion there is no BREAK;
// I need to nest all my returns with AND statement like when i learned in Programming Languages
//TIme to completion 20min
bool rec(int val, TreeNode* left,TreeNode* right){
        return (left==NULL || left->val==val && rec(val, left->left,left->right)) 
            && (right==NULL || right->val==val && rec(val, right->left, right->right));
}
bool isUnivalTree(TreeNode* root) {
        return rec(root->val, root->left, root->right);
}
