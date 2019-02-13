//Time Complexity O(log2(n))
//Space Complexity O(1)
//Time to completion 15min
TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* aux = root;
        
       
        while(aux!=NULL){
            if(aux->val == val)
                return aux;
            
            if(val < aux->val){
                aux = aux->left;
            }
                                
            else{
                aux = aux->right;
            }
            
        }
        return NULL;
        
}
