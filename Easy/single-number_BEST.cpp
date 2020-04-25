//https://leetcode.com/problems/single-number/submissions/
//Time Complexity O(n) since we traverse the array once
//Space COmplexity O(1) 
//Time to completion 10min
//THE USE OF THE BIT OPERATRO XOR Exclusive OR


int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for(auto i : nums){
            ans^=i;
        }
        
        return ans;
}
