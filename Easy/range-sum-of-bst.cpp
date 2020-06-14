//https://leetcode.com/problems/range-sum-of-bst/
// Time COmplexity O(N), it could also be O(logn)
// Space COmplexity Recursion stack

void Traverse(TreeNode* root, int& sum, int& L, int& R){
        if (root == nullptr)
            return;
        
        if(root->val >= L && root->val<=R)
            sum += root->val;
        
        if(root->val >= L)
            Traverse(root->left, sum,L,R);
        
        if(root->val <= R)
            Traverse(root->right,sum,L,R);
        
}

int rangeSumBST(TreeNode* root, int L, int R) {
        
        int sum = 0;
        Traverse(root, sum, L, R);
        queue<TreeNode*> q;
        q.push(root);
        
        return sum;
}
