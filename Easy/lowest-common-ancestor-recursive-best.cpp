//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
//Time Complexity O(log(n)) since I do a binary search until the two values deverges. 
//Space Complexitu O(1) since I only use the root;
//When using returns in recursion i need to append in the first since then.
//I needed to put the return in all the other cases for the program to pipe all the returns
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
     
        if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        
        else if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        
        else{
            return root;
        }
        
        return NULL;
        
}

/*
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
     
        if(p->val > root->val && q->val > root->val)
             lowestCommonAncestor(root->right, p, q);
        
        else if(p->val < root->val && q->val < root->val)
             lowestCommonAncestor(root->left, p, q);
        
        else{
		//this return will not do anything since it will get back to stack and not return this
            return root;
        }
        
        return NULL;
        
}
*/
