// Time COmplexity O(N)
// Space Complexity O(1) if we dont count the ans; if we do O(N)


vector<int> runningSum(vector<int>& nums) {
        vector<int> ans (nums.size(), 0);
        int accum = 0;
        for(int i = 0; i < nums.size(); i++){
            accum += nums[i];
            ans[i]=accum;
        }
        
        return ans;
}
