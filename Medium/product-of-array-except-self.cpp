// https://leetcode.com/problems/product-of-array-except-self/
// Time Complexity O(2N) ~ O(N)
// Space Complexity O(1)
// Think it first as a two for loops to get the idea
vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(),1);
        int prod = 1;
        
        for(int i = 0; i<nums.size(); i++){
            ans[i]*=prod;
            prod*=nums[i];
        }
        
        prod = 1;
        for(int i = nums.size()-1; i>=0; i--){
            ans[i]*=prod;
            prod*=nums[i];
            
        }
        
        return ans;

}
