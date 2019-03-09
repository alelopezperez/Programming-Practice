//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
//Time Complexity O(log(n)) since I do a binary search until the two values deverges. 
//Space Complexitu O(1) since I only use the root;
//I had mini help from the guide and also I had to take advantage of the problem being based in a Binary Tree

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root!=NULL){
            
            if(p->val > root->val && q->val > root->val)
                root = root->right;
            else if(p->val < root->val && q->val < root->val)
                root = root->left;
            else
                return root;
        }
        
        return NULL;
}
