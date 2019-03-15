//https://leetcode.com/problems/balanced-binary-tree/
// Time Complextion O(N*(N+1)/1) ~O(N^2)
// Space Complexity O(N) The recurison stack
// Time to completion 60min
void getLeveHeight(TreeNode* root, int* max, int level){
        if(root!=NULL){
            if(root->left==NULL && root->right==NULL){
                if(*max<level){
                    *max = level;
                }
            }
                
            else{
                getLeveHeight(root->left, max, level+1);
                getLeveHeight(root->right, max, level+1);
            }
        }
        
}
bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int max1=0;
        int max2=0;
        getLeveHeight(root->right, &max1,1);
        getLeveHeight(root->left, &max2,1);        
        return abs((max1-max2))<=1&&isBalanced(root->left)&&isBalanced(root->right);
}
