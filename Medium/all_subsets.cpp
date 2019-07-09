//https://leetcode.com/problems/subsets/submissions/
// Time Complexity O(2^(n+1)-1) Since we need to generate the whole tree
// Space Complexity O(2^(n+1)-1) Since we save the whole three when we generate it
//I learned that backtraking is like creating the tree for the solution
//https://www.youtube.com/watch?v=bGC2fNALbNU
//Time To Completion 20min
vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        subsets_helper(&ans, nums,{});
        return ans;
        
}

void subsets_helper(vector<vector<int>>* ans, vector<int> nums, vector<int> sub, int curr = 0){
        if(curr >= nums.size()){
            ans->push_back(sub);
        }
        
        else{
            subsets_helper(ans, nums, sub, curr+1);
            sub.push_back(nums[curr]);
            subsets_helper(ans, nums, sub, curr+1);
        }
        
}
