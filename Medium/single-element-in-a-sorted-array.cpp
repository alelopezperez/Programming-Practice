//https://leetcode.com/problems/single-element-in-a-sorted-array/
//Time Complexity O(log(N) Binary Search
//Space Complexitu O(1)
//Notes: Binary Search wih conditions
//Time To Completon 30min
int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int left = 0;
        int right = nums.size()-1;
        while(1){
            int mid = (right+left)/2;
            if((mid-1)>=0 && nums[mid]==nums[mid-1]){
                if(mid%2==0){
                  right = mid-1;
                }
                else{
                  left = mid+1;
                    
                }                
            }
            else if((mid+1)<nums.size() && nums[mid]==nums[mid+1]){
                if(mid%2==0){
                   left = mid+1;
                }
                else{
                    right = mid-1;
                }                 
            }
            else{
                return nums[mid];                
            }
        }
        return -1;
        
}
