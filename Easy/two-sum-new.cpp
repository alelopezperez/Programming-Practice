//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/
//Time complexity O(N)
//Space Complexity O(N)
//Time to Completion 10min

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int complement = 0;
        for(int i = 0; i<nums.size(); i++){
            complement = target-nums[i];
            if(umap.find(complement)!=umap.end()){
                if(umap[complement]!= i)
                    return {umap[complement], i};
            }
            else
                umap[nums[i]]=i;
        }
        
        return {};
        
}
