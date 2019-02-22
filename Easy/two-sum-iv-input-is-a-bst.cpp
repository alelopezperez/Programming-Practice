//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/solution/
//Time Complexity O(n*log(n)) since i need to traverse the BStree as n elements in my vector that is the size of the tree.
// Space Complexity O(N+N) since i use one vector of N elements of the tree and the recursive stack of the tree.
// I could just use my already ordere vector of elements and just use it to find the answer.
// if sum>target decrease the right side
// if sum<target increase the left side.
//time to completion 17min
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
        for(int N : nums){
            int aux = k-N;
            while(head!=NULL){
                if(head->val!=N && head->val==aux)
                    return true;
                if(aux > head->val){
                    head = head->right;
                }
                else{
                    head = head->left;
                }
            }
            head = root;
        }
        return false;
}
