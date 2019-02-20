//https://leetcode.com/problems/n-ary-tree-level-order-traversal/submissions/
//Time Complexity O(N) = O(b^d)
//Space Complexity O(N) = O(b^d)
//Time to completion 10min
vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return {};
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        
        Node* ax;
        while(!q.empty()){
            int size = q.size();
            vector<int> aux;
            for(int i=0; i<size; i++){
                ax = q.front(); q.pop();
                aux.push_back(ax->val);
                for(int j=0; j < ax->children.size(); j++){
                    q.push(ax->children[j]);
                }
                
            }
            ans.push_back(aux);
            
        }
        return ans;
        
}
