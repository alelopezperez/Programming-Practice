//https://leetcode.com/problems/path-sum/submissions/
//Time Complexity O(N) I traverse the tree only once
//Space Complexity O(N) recursive stack
//Time to Completion 10min; but in real life it was like an hour.
// I learned that in this type of problem that we need to use the or statement and traverse the tree left and right to get all the paths thanks to the recursion
// I have to keep practicing recursion in the same fucntion and using both left and right 
// I am proud of this one
bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        
        sum -= root->val;   
        
        if(sum==0 && root->left==NULL && root->right==NULL)
            return true;
        
        
        return hasPathSum(root->left,sum) || hasPathSum(root->right, sum);
}
        

