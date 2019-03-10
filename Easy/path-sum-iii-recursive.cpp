//https://leetcode.com/problems/path-sum-iii/submissions/
//Time Complexity O(n(n+1)/2) since i go throught the tree and each time I skip the past node
//Space Complexity O(N) recursive stack
//Time to completion 60min
// I learned to use to recursion at the same time
int rootSum(TreeNode* root, int sum){
        if(root==NULL) 
            return 0;
        
       
        sum-=root->val;
        if(sum==0){
            return 1+rootSum(root->left, sum)+rootSum(root->right, sum);
        }
        
        return rootSum(root->left, sum)+rootSum(root->right, sum);
    }
int pathSum(TreeNode* root, int sum) {
        
        if(root==NULL) return 0;
        return rootSum(root, sum)+pathSum(root->left, sum)+pathSum(root->right, sum);
        
}
