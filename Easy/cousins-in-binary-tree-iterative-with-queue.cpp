//https://leetcode.com/problems/cousins-in-binary-tree/submissions/
//Time Complexity O(N) since i traverse the tree once
//Space Complexity O(N) since i Use a queue.
//Time to Completion 40min
//I could use a depth search since it requires less memory since it's a stack;
// and just run it twice;
bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
            return false;
        
        queue<TreeNode*> q;
        int size;
        TreeNode* aux;
        q.push(root);
        
        while(!q.empty()){
            size = q.size();
            for(int i = 0; i<size; i++){
                aux = q.front(); q.pop();                
                if(aux->left!=NULL && aux->left->val==x|| aux->right!=NULL && aux->right->val==x){
                    for(int j = i+1; j<size; j++){
                        aux = q.front(); q.pop();
                        if(aux->left!=NULL && aux->left->val==y|| aux->right!=NULL && aux->right->val==y){
                            cout<<'A';
                            return true;
                        }                        
                    }
                    return false;
                }                
                else if(aux->left!=NULL && aux->left->val==y|| aux->right!=NULL && aux->right->val==y){
                    
                    for(int j = i+1; j<size; j++){
                        aux = q.front(); q.pop();
                        cout<<aux->val<<endl;
                        cout<<i<<endl;
                        if(aux->left!=NULL && aux->left->val==x|| aux->right!=NULL && aux->right->val==x){
                            return true;
                        }                        
                    }
                    return false;                    
                }
                else{
                    if(aux->left != NULL)
                        q.push(aux->left);
                    
                    if(aux->right != NULL)
                        q.push(aux->right);
                }
               
            }
        }
        
        return false;
}
