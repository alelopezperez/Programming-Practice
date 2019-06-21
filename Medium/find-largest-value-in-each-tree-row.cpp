//https://leetcode.com/problems/find-largest-value-in-each-tree-row/submissions/
// Time Complexity O(n) Since I traverese the whole tree
// Space Complexity O(n) since the queue while grow as the largest row in the tree
// The solution was to simply use a breadth search via a queue and just record the largest value in each iterations

vector<int> largestValues(TreeNode* root) {
	queue<TreeNode*> q;
        vector<int> ans;
        if(root == NULL) return ans;
        q.push(root);
        while(!q.empty()){
        	int mini = INT_MIN;
            	int size = q.size();
            	TreeNode* temp = NULL;
            	for(int i = 0; i<size; i++){
			temp = q.front(); q.pop();
		        if(temp->val > mini)
		        	mini = temp->val;
		        
		        if(temp->left != NULL)
		            	q.push(temp->left);
		        
		        if(temp->right != NULL)
		            	q.push(temp->right);              
            	}
            	ans.push_back(mini);
            
        }
        return ans;
        
}
