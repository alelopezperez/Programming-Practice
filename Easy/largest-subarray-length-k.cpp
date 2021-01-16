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

        
        return vector<int>(nums.begin()+pos, nums.begin()+pos+k);
}
