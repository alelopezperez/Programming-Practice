
void getPath(TreeNode* root, stack<TreeNode*>& p1, TreeNode* p, TreeNode* q, vector<stack<TreeNode*>>& par){
        if(root==nullptr)
            return;
        
        cout<<root->val<<"PUSH"<<endl;
        p1.push(root);
        
        if(root==p){
            cout<<"HEY"<<endl;
            par.push_back(p1);
        }
        
        
        if(root==q){
            cout<<"HEY"<<endl;
            par.push_back(p1);
        }
        
        if(root->left!=nullptr){
            getPath(root->left,p1,p,q,par);
            p1.pop();
        }
        
        if(root->right!=nullptr){
            getPath(root->right,p1,p,q,par);
            p1.pop();
        }
        
        
        
        
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        stack<TreeNode*> p1;
        stack<TreeNode*> q1;
        vector<stack<TreeNode*>> par;
        
        getPath(root,p1,p,q,par);
        
        p1=par[0];
        q1=par[1];
        
        while(!q1.empty() && !p1.empty()){
            if(q1.top()==p1.top())
                return q1.top();
            if(q1.size()>p1.size())
                q1.pop();
            else if(q1.size()<p1.size())
                p1.pop();
            else{
                p1.pop();
                q1.pop();
            }
                
        }
         
        return nullptr;
        
        
}
