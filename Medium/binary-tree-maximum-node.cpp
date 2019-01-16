using namespace std
class Solution {
public:
    /*
     * @param root: the root of tree
     * @return: the max node
     */
    TreeNode * maxNode(TreeNode * root) {
        
    if(root==NULL){
        return NULL;
    }

    std::queue<TreeNode*> q ;
    TreeNode*max = root;
    
    q.push(root);
    while(!q.empty()){
        
        for(int i = 0; i<q.size(); i++){
            TreeNode* temp = q.front(); 
            
            q.pop(); 
            
            if(max->val < temp->val){
                max = temp;
            }
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }   
    }
    
    return max;
        
    }
};

