//https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
//Time COmplexity O(N)
//Space COmplexity O(1)
//GREEDY ALGORITHM REMBER SINCE IT SAYS somthin like MIN/MAX MOST BLAH BLAH

int minStartValue(vector<int>& nums) {
        int candidate = 1;
        int curr = 1;
        
       
        
        for(int i = 0; i<nums.size(); i++){
            curr+=nums[i];
            if(curr<=0){
                candidate += 1-curr;
                curr = 1;
            }
            
        }
        return candidate;        
}
