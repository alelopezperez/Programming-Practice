/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* recursion(int left, int numsize, int* nums){
    
    int max = 0;
    int pos_max = left;
    int i = left;
    
    while(i<numsize){
        if(nums[i]>max){
            max = nums[i];
            pos_max=i;
        }
        i++;
    }
    
    struct TreeNode *root = malloc(sizeof(struct TreeNode));
    
    
    root->val=max; 
    
    if (left==numsize){
        return NULL;        
    }
    
       
    root->left = recursion(left, pos_max, nums);
    root->right = recursion(pos_max+1, numsize, nums);
    return root;
    
    

}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    
    return recursion(0,numsSize, nums);
    
}





