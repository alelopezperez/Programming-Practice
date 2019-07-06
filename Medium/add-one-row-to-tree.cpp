//https://leetcode.com/problems/add-one-row-to-tree/submissions/
//Time Complexity O(N) Since it traverse the whole tree
//Space Complexity O(b^d) == O(N) since it will be as big as the last layer of the tree
// This problem was easy to resolve with a fresh mind; i just had to get the layer/level I need using BFS; and add the row
//Time To Completion 60min
TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1){
            TreeNode* edge = new TreeNode(v);
            edge->left = root;
            return edge;
        }
            
        int level = d -1;
        queue<TreeNode*> q;
        q.push(root);
        int curr = 1;
        while(!q.empty() && curr<level){
            curr++;
            int size =  q.size();
            TreeNode* temp;
            for(int i = 0; i<size; i++){
                temp = q.front(); q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        
        while(!q.empty()){
            TreeNode* temp = q.front(); q.pop();
            TreeNode* left = temp->left;
            TreeNode* right = temp->right;
            TreeNode* rowl = new TreeNode(v);
            TreeNode* rowr = new TreeNode(v);
            
            temp->left = rowl;
            rowl->left = left;
            
            temp->right = rowr;
            rowr->right = right;
        }
        
        return root;
}
