//https://leetcode.com/problems/convert-bst-to-greater-tree/submissions/
//Not Proude i had to see the guide and kinda didn't understand it
//Time Complexity O(N) traverse the tree once
// SPace COmpleixty O(N) recursive stack
void sumInorder(TreeNode* root, int* suma){
        if(root!=NULL){
            sumInorder(root->right, suma);
            *suma += root->val;
            root->val = *suma;
            sumInorder(root->left, suma);
            
        }
}

TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        sumInorder(root, &sum);       
        return root;
        
}
