//https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/submissions/
// Time Complexity AVG: O(n*log2(n)) Worst: O(n*n)=O(n^2) 
// Space Complexity O(1);
// Time To complextion 10min
// This was just using how to add in a BST; while traversing the vector and adding the values
TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(!preorder.size()) return NULL;
        
        TreeNode* root = new TreeNode(preorder[0]);
        int i=1;
        for(int i = 1; i < preorder.size(); i++){
            TreeNode* aux = root;
            TreeNode* prev = aux;
            while(aux!=NULL){
                prev = aux;
                if(preorder[i]>= aux->val)
                    aux = aux->right;
                else
                    aux = aux->left;
                
            }
            if(preorder[i]>=prev->val)
                prev->right = new TreeNode(preorder[i]);
            else
                prev->left = new TreeNode(preorder[i]);
        }
        
        return root;
        
}
