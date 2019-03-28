//https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/
//Time Complexity O(log2(N)) since i use The properties of a BST  and go either left or right
//Space Complexity O(N) or O(1)  I think am using tail recursion so there is no need to have the recurison stack
//Time to Completion 8min
// This was a simple BST insertion
void insertion(TreeNode** root, int* val){
        if(*root == NULL){
            (*root) = new TreeNode(*val);
        }
        else{
            if(*val > (*root)->val)
                insertion(&((*root)->right), val);
            else
                insertion(&((*root)->left), val);
                
        }
        
}

TreeNode* insertIntoBST(TreeNode* root, int val) {
        insertion(&root, &val);
        return root;
}
