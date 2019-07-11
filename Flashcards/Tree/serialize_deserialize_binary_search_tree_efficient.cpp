//https://leetcode.com/problems/serialize-and-deserialize-bst/
// Time Complexity O(N) since i have to traverse the array once to create the node via having a global current postion
// Space COmplexity O(N) Recursion stack.
// I just had to use what a BST is for and then use the ranges it will have since it's a BST.
string serialize(TreeNode* root) {
        if (root == NULL)
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
    
 
    TreeNode* helper_deserialize(vector<int> data, int min, int max, int* curr){
        
        if(*curr >= data.size())
            return NULL;
        TreeNode* root = NULL;
        if(data[*curr]>min && data[*curr]<max){
            root = new TreeNode(data[*curr]);
            *curr = *curr+1;
            root->left = helper_deserialize(data, min, root->val, curr);
            root->right = helper_deserialize(data,root->val, max, curr);         
            
        }
        
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
        int curr = 0;
        return helper_deserialize(datax, INT_MIN, INT_MAX,&curr);
        
                 
    }
