//https://leetcode.com/problems/cousins-in-binary-tree/submissions/
//Time Complexity O(2N) i need to travese the tree two times
//Space COmplexity O(N) Because of the recursive stack
// I Learned that sometime returning things with recursion can be tricky;
//Sometime is better to pass the data structure and fill it using a void statement;
void fatherPreorder(TreeNode* root, int level, int goal, pair<int,int>* data){
        if(root!=NULL){
            if(root->left!=NULL && root->left->val == goal || root->right!=NULL && root->right->val == goal){
                *data = make_pair(root->val, level+1);   
                return;
            }
            fatherPreorder(root->left, level+1, goal, data);
            fatherPreorder(root->right, level+1, goal, data);
        }       
        
}

bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
            return false;
        
        pair<int, int> xp;      
        pair<int, int> yp;
        fatherPreorder(root,0,x,&xp);
        fatherPreorder(root,0,y,&yp);
        
        return xp.first!=yp.first && xp.second==yp.second;
}
