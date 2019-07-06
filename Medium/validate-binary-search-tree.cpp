//https://leetcode.com/problems/validate-binary-search-tree/
//Time Complexity O(N)
//Space Complexity O(N)
//This was really easy afet i made the O(N) Seraialize and Deserialeze a BST using ranges
// also long int == long
// long long int == long long
bool isValidBST(TreeNode* root, long long min=-2147483649, long long max=2147483648) {
        if(root==NULL)
            return true;
        
        return (root->val>min && root->val<max) 
            && isValidBST(root->left,min,root->val) 
            && isValidBST(root->right,root->val,max);
        
}
