//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/ 
//Time Complexity O(N)
//Space Complexity O(1) 
int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty())
            return 0;
        
        int pos = 0;
        int val = INT_MIN;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=val){
               
                val= nums[i];
                
                nums[pos++]=val;
        
            }
        }
        
        return pos;
        
}
