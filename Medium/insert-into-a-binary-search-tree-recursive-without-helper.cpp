//https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/
//Time Complexity O(log2(N)) since i use The properties of a BST  and go either left or right
//Space Complexity O(N) or O(1)  I think am using tail recursion so there is no need to have the recurison stack
//Time to Completion 8min
// When you want to manage the root just use the return equals to root->left = fun(); or root->right = fun();
// and it will mantain the root node intact
TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            return new TreeNode(val);
        }
        else{
            if(val >= (root)->val)
                root->right = insertIntoBST(((root)->right), val);
            else
                root->left  = insertIntoBST(((root)->left), val);
                
        }
        return root;
}
