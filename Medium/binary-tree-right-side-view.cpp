//https://leetcode.com/problems/binary-tree-right-side-view/solution/
// Time Complexity O(N) We traverse the whole tree
// Space Complexity O(N) We save all the result of the child by each level
// We just take the last (or first it depend in which order you push first; left to right o right to left)
vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        
        deque<TreeNode*> q;
        vector<int> ans;
        q.push_back(root);
        while(!q.empty()){
            int size = q.size();
            ans.push_back(q.back()->val);
            for(int i = 0; i< size; i++){
                TreeNode* temp = q.front(); q.pop_front();
                if(temp->left!=NULL)
                    q.push_back(temp->left);
                if(temp->right!=NULL)
                    q.push_back(temp->right);                    
            }
           
        }
        return ans;
}
