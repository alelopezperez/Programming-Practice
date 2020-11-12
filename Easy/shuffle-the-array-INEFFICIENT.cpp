//INEFFICIENT
//https://leetcode.com/problems/shuffle-the-array/
//Time COmplexity O(N)
//Space COmpelexity O(N)


vector<int> shuffle(vector<int>& nums, int n) {
        
        int x = 0;
        int y = n;
        
        vector<int> ans;
        
        while(y<nums.size()){
            ans.push_back(nums[x]);
            ans.push_back(nums[y]);
            
            x++;
            y++;
        }
        
        return ans;
        
}
