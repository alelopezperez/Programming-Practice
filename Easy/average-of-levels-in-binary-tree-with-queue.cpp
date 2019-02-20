//https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
//Time Complexity O(n) since i only traverse the tree once
//Space Complexity O(n) since I use one Queue
//Time to Completion 8min
vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        
        vector<double> ans;
        queue<TreeNode*> q; q.push(root);
        double accum = 0;
        TreeNode* aux;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i<size; i++){
                aux = q.front(); q.pop(); 
                accum += aux->val;
                
                if(aux->left != NULL)
                    q.push(aux->left);
                
                if(aux->right != NULL)
                    q.push(aux->right);
                
            }
            ans.push_back(accum/size);
            accum = 0;
        }
        return ans;
}
