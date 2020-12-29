//https://leetcode.com/problems/max-consecutive-ones-ii/submissions/
// Time Complexity O(2N)
// Space Complexity O(1)

int findMaxConsecutiveOnes(vector<int>& nums) {
        int lastZero = -1;
        
        int left = 0;
        int right = 0;
        
        int maxi = 0;
        while(right<nums.size()){
            
         
            if(nums[right] != 0){   
                maxi = max(maxi, right-left+1);
                right++;
                
            }
            
            else if(lastZero == -1){
                maxi = max(maxi, right-left+1);
                lastZero = right;
                right++;
                
            }
            
            else{
                left = lastZero+1;
                right = left;
                lastZero = -1;
            }
            
           
                
        }
        
      
        return maxi;
}
