//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
//Time Complexity O(log(n)+log(n)+N) since I do a binary search twice to find the list of parents 
//Space Complexitu O(2N) I use two vector for saving the parents of the two nodes.
//time to completion 45min;

vector<TreeNode*> getAncestors(TreeNode* root, TreeNode* target){
        vector<TreeNode*> ancestor;
        while(root!=NULL){
            ancestor.push_back(root);
            if(root==target)
                return ancestor;
            if(target->val > root->val)
                root=root->right;
            else
                root=root->left;
        }
        return {};
        
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pa = getAncestors(root, p);
        vector<TreeNode*> qa = getAncestors(root, q);
       
        int i = pa.size()-1;
        int j = qa.size()-1;
        if(i>j){
            i -= i-j;
        }
        if(j>i)
            j -= j-i;
        
        cout<<pa.size()<<endl;
        cout<<qa.size()<<endl;
        
        cout<<i<<endl;
        cout<<j<<endl;
     
        while(i>=0){
            if(pa[i]==qa[i])
                return pa[i];
            i--;
        }
        return root;
}
