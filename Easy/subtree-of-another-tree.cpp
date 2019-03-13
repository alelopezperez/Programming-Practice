//https://leetcode.com/problems/subtree-of-another-tree
//Time Complexity O(N*M) because i need to check similarity of the subtree to tree as leave's tree time the subtre.
//Space Complexity O(N) the recursive stack
//Time To Completion 5min
// This one was really easy when I decided quicly avoided trying to answer it in one traversal.
bool sametree(TreeNode*s, TreeNode* t){
        if(s==NULL && t==NULL) return true;
        if(s==NULL || t==NULL) return false;
        
        return (s->val==t->val) && sametree(s->left,t->left) && sametree(s->right, t->right);
}

bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL && t==NULL) return true;
        if(s==NULL || t==NULL) return false;
        return sametree(s,t)||isSubtree(s->left,t)||isSubtree(s->right,t);
}
