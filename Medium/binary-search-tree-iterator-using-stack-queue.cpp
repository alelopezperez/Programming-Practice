//https://leetcode.com/problems/binary-search-tree-iterator/submissions/
//Time complexity O(2N); I once to store it and seconde when using next;
//Space COmplexitu O(2N); i use a stack and a queue.
//Time to completion 15min

//This code need improvement. Maybe i just need to save the parent node; and when using next just poping and pushing correctly.
class BSTIterator {
public:
    queue<int> main;
    BSTIterator(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr=root;
        
        while(!st.empty() || curr!=NULL){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();st.pop();
            main.push(curr->val);
            curr=curr->right;
        }
        
    }
    
    /** @return the next smallest number */
    int next() {
        int aux = main.front();main.pop();
        return aux;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !main.empty();
    }
};

