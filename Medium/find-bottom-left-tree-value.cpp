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
     * @param root: a root of tree
     * @return: return a integer
     */
    int findBottomLeftValue(TreeNode * root) {
        std::queue<TreeNode*> q;
        std::queue<TreeNode*> aux;
        
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            std::queue<TreeNode*> temp;
            for(int i=0; i<size; i++){
                TreeNode * t= q.front();
                q.pop();
                temp.push(t);
                
                if(t->left!=NULL)
                    q.push(t->left);
                    
                if(t->right!=NULL)
                    q.push(t->right);
               
            }
            aux = temp;
        }

        
        return aux.front()->val;
    }
};
