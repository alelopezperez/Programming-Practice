//https://leetcode.com/problems/path-sum-ii/
//Time Complexity O(N) I traverse the whole tree once
//Space Complexity O(N) the recursive stack
// I learned this while combining the check if path sum exists and get to string the path from root to all of it leaves
// It needs improvement
void helper(TreeNode* root, int sum, vector<vector<int>>* ans, vector<int> aux={}){
        if(root!=NULL){
            sum -= root->val;
            aux.push_back(root->val);
            if(sum==0 && root->left==NULL && root->right==NULL){
                ans->push_back(aux);
            }

            else{
                helper(root->left, sum, ans, aux);
                helper(root->right, sum, ans, aux);
            }            
        }
}

vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        helper(root, sum, &ans);
        return ans;
}
