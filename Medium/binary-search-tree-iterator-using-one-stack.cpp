//https://leetcode.com/problems/binary-search-tree-iterator/submissions/
//Time complexity O(2N); I once to store it and seconde when using next;
//Space COmplexitu O(N); i use one stack.
//Time to completion 20min
//I learned that in in-order you alway try go left left left until you hit null; take one step at the right from the leftest and keep going left until you finish
class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        TreeNode* curr=root;
        
       
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
        
        
    }
    
    /** @return the next smallest number */
    int next() {
        int aux = st.top()->val;
        TreeNode* curr = st.top()->right;
        st.pop();
        while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
        }        
        
        return aux;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !st.empty();
    }
};
