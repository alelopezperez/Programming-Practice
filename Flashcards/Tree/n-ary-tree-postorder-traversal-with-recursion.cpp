//https://leetcode.com/problems/n-ary-tree-postorder-traversal/
//Time Complxity O(N) with traverse the completre tree once
//Space Complexity O(n) The recusion stack.
//Time to completion 5min
void postrec(Node* root, vector<int>* ans){
        if(root!=NULL){
            for(auto N: root->children){
                postrec(N, ans);
            }
            ans->push_back(root->val);
        }
}

vector<int> postorder(Node* root) {
        vector<int> ans;
        postrec(root, &ans);
        return ans;
        
}
