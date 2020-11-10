//https://leetcode.com/problems/missing-number/submissions/
// Time Complexity O(N)
// Space Complexity O(1)

int missingNumber(vector<int>& nums) {
        /*vector<int> map(nums.size()+1,-1);
        
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]=0;
        }
        
        for(int i = 0; i<map.size(); i++){
            if(map[i]==-1)
                return i;
        }*/
        int n = nums.size();
        int sum = (n*n+n)/2;
        for(int& i : nums)
            sum-=i;
        
        return sum;
        
}
