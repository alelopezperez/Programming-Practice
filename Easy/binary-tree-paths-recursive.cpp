//https://leetcode.com/problems/binary-tree-paths/submissions/
//Time Complexity O(N) since i only traverse the tree once
//Space COmplexity O(N) recursive stack and also  the vector of string for the answer.
//Time to completion 30min
//I Can use this and also if it is true if  the path exist to create the path to sum.
void helper(TreeNode* root, vector<string>* ans, string temp=""){
        if(root!=NULL){
  
            if(root->left==NULL && root->right==NULL){
                temp.append(to_string(root->val));
                ans->push_back(temp);
            }
            else{
                temp.append(to_string(root->val));
                temp.append("->");
            }
            helper(root->left, ans, temp);
            helper(root->right, ans, temp);
        }
}
vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root, &ans);
        return ans;
}
