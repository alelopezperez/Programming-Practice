//https://leetcode.com/problems/boundary-of-binary-tree/
//Time Complexity O(N)
//Space Complexity O(N)


void left(TreeNode* root, vector<int>& ans){
        if(root == NULL || (root->left==NULL && root->right==NULL))
            return;
        ans.push_back(root->val);
        
        if(root->left != NULL)
            left(root->left,ans);
        else
            left(root->right, ans);
        
}
    
void leaf(TreeNode* root, vector<int>& ans){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            ans.push_back(root->val);
        
        leaf(root->left, ans);
        leaf(root->right, ans);
}
    
void right(TreeNode* root, vector<int>& ans){
        if(root == NULL || (root->left==NULL && root->right==NULL))
            return;
      
        
        if(root->right != NULL)
            right(root->right,ans);
        else
            right(root->left, ans);
        
        ans.push_back(root->val);
}
    
vector<int> boundaryOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
            return {};
  
        vector<int> ans;
        ans.push_back(root->val); 
        left(root->left,ans);
        
        leaf(root->left,ans);
        leaf(root->right,ans);
        
        right(root->right,ans);
       
        return ans;
}
