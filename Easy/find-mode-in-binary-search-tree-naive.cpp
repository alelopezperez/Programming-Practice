//https://leetcode.com/problems/find-mode-in-binary-search-tree/submissions/
//Time Complexity O(N+N) ~ O(N) since i traverse the tree once a then i traver my hasp map or dictionary to know the mode.
// Space Complexity O(N) I create a ordered map or dictionary or hash map to save 
// this is the most naive method.
void traverseBST(TreeNode* root, map<int,int>* moda){
        if(root!=NULL){
            if(moda->find(root->val)==moda->end()){
                (*moda)[root->val]=1;
                //moda->insert(std::pair<char,int>(root->val,1));
            }
            else{
                (*moda)[root->val]+=1;
            }
            traverseBST(root->left, moda);
            traverseBST(root->right, moda);
        }
}
vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        map<int,int> moda;
        traverseBST(root, &moda);
        vector<int> ans;
        ans.push_back(moda.crbegin()->first);
        for (auto rit = ++moda.crbegin(); rit != moda.crend(); ++rit){
            if(moda.find(ans.back())->second<rit->second){
                ans={};
                ans.push_back(rit->first);
            }
            
            else if(moda.find(ans.back())->second==rit->second){
                ans.push_back(rit->first);
            }
            
        }
        return ans;
}
