//https://leetcode.com/problems/serialize-and-deserialize-bst/
// Time Complexity O(N^2) since i have to traverse the tree once to create the node and once again to find the pivot point(if the BST is skewed then it will happen)
// Space COmplexity O(N)
// I just had to use what a BTS is for and then just find the pivot point and separate.
string serialize(TreeNode* root) {
        if (root == NULL)t
            return "";
        stack<TreeNode*> st;
        st.push(root);
        string serial;
        while(!st.empty()){
            int size = st.size();
            TreeNode* temp;
            for(int i = 0; i<size; i++){
                temp = st.top(); st.pop();
                serial.append(to_string(temp->val));
                serial.push_back(',');
                if(temp->right != NULL){
                    st.push(temp->right);
                }
                if(temp->left != NULL){
                    st.push(temp->left);
                }
                
            }
        }
        serial.pop_back();
        return serial;
}
    
int findGreater(vector<int> data, int low, int high){
        int point = data[low];
        int i = low+1;
        while(i<=high){
            if(data[i]>point)
                break;
            i++;
            
        }
        return i;
}

TreeNode* helper_deserialize(vector<int> data, int low, int high){
        if(low > high){
            return NULL;
        }
        TreeNode* root = new TreeNode(data[low]);
        int point = findGreater(data, low, high);
        cout<<low<<", "<<point<<", "<<high<<endl;
        
        root->left = helper_deserialize(data, low+1, point-1);        
        root->right = helper_deserialize(data, point, high);
        
        return root;
}
    
TreeNode* deserialize(string data) {
        if(data.size()==0)
            return NULL;
        
        vector<int> datax;
        string temp;
       
        for(auto N : data){
            if(N == ','){
                datax.push_back(stoi(temp));
                temp = "";
            }
            else{
                temp.push_back(N);
            }
        }
        
        datax.push_back(stoi(temp));
        
        return helper_deserialize(datax, 0, datax.size()-1);
        
                 
}
