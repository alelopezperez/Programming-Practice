///https://leetcode.com/problems/minimum-depth-of-binary-tree
//Time Complexity O(N) i traverse the tree once
//Space Complexity O(N) the recursive stack
// I learned to sometime if you dont need to reach the NULL for problem purposes then you need
// too use if a then just called the funtion again recurls with that value
//time to completion 20min
int minDepth(TreeNode* root) {
        
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;        
        
        if(root->right!=NULL && root->left!=NULL )
            return min(minDepth(root->left)+1, minDepth(root->right)+1); //when we have two nodes get min
        
        else if(root->left!=NULL)
            return minDepth(root->left)+1; //get the value of the node since there the other node is nulll
        
        else
            return minDepth(root->right)+1;

}
