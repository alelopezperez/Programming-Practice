//https://leetcode.com/problems/closest-binary-search-tree-value/
//Time Complexity O(log(N)))
//Space COMplecity O(N)
//ALWAYS TRY BINARY SEACRCH ON BST


void helper(TreeNode* root, double target, int& ans, double& diff){
        if(root != NULL){
            double val = root->val - target;
            double val2 =abs(val);
            if(val == 0){
                ans = root->val;
                return;
            }
            
            if(val2<diff){
                diff=val2;
                ans = root->val;
            }
            if(val>0)
                helper(root->left, target, ans, diff);
            else
                helper(root->right, target, ans, diff);
        }
    }
    
int closestValue(TreeNode* root, double target) {
        int ans = 0;
        double diff = LONG_MAX;
        helper(root, target, ans, diff);
        
        return ans;
}
