// https://leetcode.com/problems/construct-string-from-binary-tree/submissions/
//Time Complexity O(N) i traverse the tree once;
//Space complexity O(N) because of the recursion stack
//Time to completion 12min;
// I need to practice the return when using recursion.
void preOrderSt(TreeNode* root, string* s){
        if(root!=NULL){
            s->append(to_string(root->val));
            if(root->left==NULL&& root->right==NULL)
                return;
            
            s->push_back('(');
            preOrderSt(root->left, s);
            s->push_back(')');
            
            if(root->right !=NULL){
                s->push_back('(');
                preOrderSt(root->right, s);
                s->push_back(')');
            }
            else{
                preOrderSt(root->right, s);
            }
            
        }
}
string tree2str(TreeNode* t) {
        string s;
        preOrderSt(t, &s);
        return s;
}
