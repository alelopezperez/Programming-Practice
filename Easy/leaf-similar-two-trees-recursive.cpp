

//Time Complexity O(2N)
//Space Complexity O(2N)
// I Learned that you cannot try to get the leafs of two tree at the same time recursely.
void getLeafRec(TreeNode* root, vector<int>* ans){
        if(root->left==NULL && root->right==NULL ){
            ans->push_back(root->val);
        }
        if(root->left!=NULL){
            getLeafRec(root->left, ans);
        }
        if(root->right!=NULL){
            getLeafRec(root->right, ans);
        }
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;
        getLeafRec(root1, &r1);
        getLeafRec(root2, &r2);
        
        return r1==r2;
        
}
