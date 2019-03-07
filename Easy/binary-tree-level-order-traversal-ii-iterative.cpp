//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/
//Time Complexity O(2N) since i traverse the tree twice;
//Space Complexity O(2N) since i use a queue and the recursive stack to get the depth level of the tree;
//Time to completion 30min
//Here I learned that sometimes you dont need one traverse to have an efecient algorithm.
//I got to stop thinking so much of doing things in one tree traversal; 	
int depthLevel(TreeNode* root, int i =0){
        if(root==NULL)
            return i;
        return max(depthLevel(root->left, i+1),depthLevel(root->right, i+1));
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)
            return {};
        int size = depthLevel(root);
        vector<vector<int>> ans(size);
        
        queue<TreeNode*> q;
        q.push(root);
        int i = size-1;
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
            ans[i]=aux;
            i--;
        }        
        return ans;
}
