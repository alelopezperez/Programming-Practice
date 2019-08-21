//https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
//Time Complexity O(N) i traverse the tree once
//Space Complexity O(N) the queue grows linearly
//Notes: A simple Breadth First Search i check the sum of each level and save the max value
//Time to completion 20min
int maxLevelSum(TreeNode* root) {
       
        int level = 0;
        int currmax= level;
        queue<TreeNode*> q;
       
        int max = INT_MIN;
        q.push(root);
        TreeNode* aux;
        while(!q.empty()){
            level++;
            int sum = 0;
            int size = q.size();
        
            for(int i = 0; i<size; i++){
                aux = q.front(); q.pop();
                sum += aux->val;  
               
                if(aux->left != NULL)
                    q.push(aux->left);
                if(aux->right != NULL)
                    q.push(aux->right);
            }
            if(sum>max){
                max = sum;
                currmax = level;
            }
            
            
            
        }
        return currmax;
}
