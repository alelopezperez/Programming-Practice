//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/solution/
//Time Complexity O(2N) since i need to traverse the BStree once and just traverse the array with two pointer until it reaches on the other side or the answer.
// Space Complexity O(N+N) since i use one vector of N elements of the tree and the recursive stack of the tree.
//this is the best solution taking advantage of the properteies of a BST
void fill(TreeNode* root, vector<int>* nums){
        if(root!=NULL){
            fill(root->left, nums);
            nums->push_back(root->val);
            fill(root->right, nums);
        }
}
        
bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        fill(root, &nums);
        TreeNode* head = root;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j] == k)
                return true;
            if(nums[i]+nums[j] > k)
                j--;
            else
                i++;
        }
        return false;
        
}
