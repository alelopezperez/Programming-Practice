//https://leetcode.com/problems/kth-smallest-element-in-a-bst/
//Time Complexity O(N)
//Space Complexity O(N) 
void helper(TreeNode* root, int& k, priority_queue<int>& max_heap){
        if(root==NULL)
            return;
        
        max_heap.push(root->val);
        
        while(max_heap.size() > k)
            max_heap.pop();
        
        helper(root->left, k, max_heap);
        helper(root->right, k, max_heap);
        
}

void helper2(TreeNode* root, vector<int>& temp){
        if(root==NULL)
            return;
        
        helper2(root->left,temp);
        temp.push_back(root->val);
        helper2(root->right,temp);
}

int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return -1;
        
        //priority_queue<int> max_heap;
        vector<int> temp;
        //helper(root,k,max_heap);
        helper2(root,temp);
        return temp[k-1];
}
