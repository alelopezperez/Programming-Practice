//NAIVE SOLUTION
//Time Complexity O(2N) since I traverse the tree then I again traverse the created array for filling the answer
// Space Complexity O(2N) since i create an array of the correct order then i use to create a new array
//Time to completion THE WHOLE DAY!! I was not using the dummy correctly!
//i was updating/chagin the location of my head in the dummy one.!!!
//REMBER WHEN USING A DUMMY ALWAYS USE A CURR VARIABLE THAT WILL ALWAYS BE CHAGING
void naive(TreeNode* root, vector<int>* ans){
        if(root!=NULL){
            naive(root->left, ans);            
            ans->push_back(root->val);
            naive(root->right, ans);
        }
}
    
TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode(0);
        vector<int> aux;
        naive(root, &aux);
        TreeNode* curr = ans;
        for(int i = 0; i<aux.size(); i++){
            cout<< aux[i];
            curr->right = new TreeNode(aux[i]);
            curr=curr->right;
        }
        return ans->right;
}
