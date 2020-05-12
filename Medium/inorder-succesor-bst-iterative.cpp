//https://leetcode.com/problems/inorder-successor-in-bst/
// Time Complexity O(n)
// Space Complexity O(n) because of the stack.
// time to competion 30min
// LEARNE IN ORDER TRAVESAL ITERATIVALY

TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if (p->right != nullptr) {
          p = p->right;
          while (p->left != nullptr) 
              p = p->left;
          return p;
        }
        
        stack<TreeNode*> st;
        TreeNode* curr = root;
        
        while(curr != nullptr || !st.empty()){
            
            while(curr!=nullptr){
                st.push(curr);
                curr = curr->left;
            }
            
            
            curr = st.top();
            st.pop();
            
            if(curr == p){
                if(!st.empty())
                    return st.top();
                else
                    return nullptr;
            }
             
            
            curr = curr->right; 
        }
return nullptr;
