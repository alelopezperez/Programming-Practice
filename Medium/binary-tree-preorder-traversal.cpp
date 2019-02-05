
//Time complexity O(N)
//Memory Complexity O(N)
//I Learned to do and preorder depth search in an binary tree
//Time to completion 24min
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            int size = st.size();
            for(int i = 0; i<size; i++){
                TreeNode* aux= st.top(); st.pop();
                ans.push_back(aux->val);
                if(aux->right!=NULL)
                    st.push(aux->right);
                if(aux->left!=NULL)
                    st.push(aux->left);
            }
            
        }
        return ans;
        
}
