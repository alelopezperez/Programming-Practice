//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/submissions/
// Time COmplexity O(N) since i traverse the tree once
// Space Compexity O(N) recursive stack
// This one i learned if you need to to something at the end of a recursion is a good idea to just do the recursion aisde in another function
// get the value and just to the final operarion after the recusion
int findSecondMin(TreeNode* root, int first=INT_MAX, int second=INT_MAX){
          if(root==NULL){
            return second;
        }       
        if(root->val < first){
                second = first;              
                first=root->val;
            
        }
        else if(root->val < second && root->val!=first){
                second = root->val;
        }
        return min(findSecondMin(root->left, first, second),findSecondMin(root->right, first, second));
    }
int findSecondMinimumValue(TreeNode* root) {
        int min = findSecondMin(root);
        
        if(min==INT_MAX)
            return -1;
        return min;
        
}
