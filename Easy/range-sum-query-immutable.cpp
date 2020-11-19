//https://leetcode.com/problems/range-sum-query-immutable/submissions/
//Time COmplexity O(N) pre-computation the O(1)
//Space Complexity O(N)

class NumArray {
public:
    vector<int> accum;
    NumArray(vector<int>& nums) {
        int sum = 0;
        accum.push_back(sum);
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            accum.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        
       
        return accum[j+1]-accum[i];
    }
};
