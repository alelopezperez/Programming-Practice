//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/
//Time Complexity O(N + N/2) since i traverse the tree once and reverse the vector and the reverse function is only until half if the vector;
//Space Complexity O(N) since i use a queue;
//Time to completion 30min
// Here I leanred that reverse can be used and be efficient.

vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)
            return {};

        vector<vector<int>> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> aux;
            for(int i = 0; i<size; i++){
                TreeNode* temp = q.front();q.pop();
                aux.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            ans.push_back(aux);
        } 
        reverse(ans.begin(), ans.end());
        return ans;
}
