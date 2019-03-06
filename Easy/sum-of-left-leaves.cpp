//https://leetcode.com/problems/sum-of-left-leaves/submissions/
// Time complexity O(N)
//Space COmplexity O(N)
// TIme to completion 60min
// I need to start drawing more with trees
void rec(TreeNode* root, bool isLeft, int* sum){
        if(root!=NULL){
            if(root->left == NULL && root->right == NULL && isLeft){
                *sum += root->val;   
            }
            if(root->left!=NULL){
                rec(root->left,true, sum);
            }            
            if(root->right!=NULL){
                rec(root->right,false, sum);
            }            
        }

        
       
}
int sumOfLeftLeaves(TreeNode* root) {
        int suma = 0;
        rec(root, false, &suma);        
        return suma;
        
}
