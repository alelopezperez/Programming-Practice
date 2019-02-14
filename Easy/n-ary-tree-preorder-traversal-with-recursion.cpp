//Time Complexity O(N) since we visit or traverse the complete tree
//Space Complexity O(N) since we use the 
//time to completion 10min
// I think i learned to finally do preorder with recursion it's easy first you look
//then check it's child and keep doing it like that
void preorderec(Node* root,vector<int>* ans){
        if(root !=  NULL){
            cout<<root->val;
            ans->push_back(root->val);
            for(int i = 0; i<root->children.size(); i++){
                preorderec(root->children[i], ans);
            }
        }
}
        
vector<int> preorder(Node* root) {
        vector<int> ans;
        preorderec(root,&ans);
        return ans;
}
