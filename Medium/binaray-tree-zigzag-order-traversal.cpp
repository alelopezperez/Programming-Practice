//TIme Complexity O(2N)
//Space COmplexity O(N)
//Time to completion 30min
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        
        
        queue<TreeNode*> q;
        
        q.push(root);
        bool alternate =false;
        while(!q.empty()){
            vector<int> aux;
            int size = q.size();
            for(int i = 0; i<size; i++){
                TreeNode* taux = q.front(); q.pop();
                aux.push_back(taux->val);                
             
                if(taux->left!=NULL){
                    q.push(taux->left);
                }
                    
                if(taux->right!=NULL){
                    q.push(taux->right);
                }   
            
                
            }
            if(alternate){
                reverse(aux.begin(), aux.end());
                
            }
            alternate = (!alternate);
            ans.push_back(aux);
            
           
        }
        return ans;
        
}
