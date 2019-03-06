//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
//Time Complexity O(N)
//Space COMplecity O(N)
//Time to completion A LOT more than 2 hours over two days
void balancedBST(int min, int max, vector<int>* nums, TreeNode** root){
        if(min<=max){
            int mid = min+(max-min)/2;
            *root = new TreeNode((*nums)[mid]);
            
            balancedBST(min,mid-1, nums, &(*root)->left);
            balancedBST(mid+1, max, nums, &(*root)->right);
            
        }
}
    
TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        
        int min = 0;
        int max = nums.size();
        TreeNode* root = new TreeNode(0);        
        balancedBST(min,max-1, &nums, &root);
        
        return root;
}
