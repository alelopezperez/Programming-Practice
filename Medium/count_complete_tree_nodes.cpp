/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: root of complete binary tree
     * @return: the number of nodes
     */
    int countNodes(TreeNode * root) {
        if (root==NULL){
            return 0;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
