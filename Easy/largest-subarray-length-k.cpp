//https://leetcode.com/problems/largest-subarray-length-k/
// Time Complexity O(N-k)
// Space COmplexity O(K)

vector<int> largestSubarray(vector<int>& nums, int k) {
       
        int pos = 0;
        for(int i=1; i<=nums.size()-k; i++){
            if(nums[i]>nums[pos]){
                pos = i;
            }
        }
        
        vector<int> ans;
        while(k>0){
            ans.push_back(nums[pos]);
            pos++;
            k--;
        }
        
        return ans;
}
