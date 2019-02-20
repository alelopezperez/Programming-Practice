//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
//Time Complexity O(N) since we visit or traverse the complete tree
//Space Complexity O(N) we use one stack
//time to completion 10min
// I i reenforced my usage of stacks with this implementation
vector<int> preorder(Node* root) {
        vector<int> ans;
        stack<Node*> aux;
        if(root == NULL)
            return ans;
        aux.push(root);
        Node* temp;
        while(!aux.empty()){
            int size = aux.size();
            for(int i = 0; i<size; i++){
                temp = aux.top(); aux.pop();
                ans.push_back(temp->val);
                
                for(int i = (temp->children.size())-1; i>=0; i--){
                    aux.push(temp->children[i]);
                }
                
            }
        }
        return ans;
}
