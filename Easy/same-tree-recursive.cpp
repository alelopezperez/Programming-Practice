//https://leetcode.com/problems/same-tree/submissions/
//Time Complexity O(n) or O(b^l) since I need to traverse the tree once
//Space COmplexity O(n) the recursive stack
//Time to completion 10min
bool isSameTree(TreeNode* p, TreeNode* q) {
       
        if(p==q)
            return true;
        if(p==NULL || q==NULL)
            return false;
        return  (p->val==q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
}
