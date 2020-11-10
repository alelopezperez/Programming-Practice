//https://leetcode.com/problems/search-in-rotated-sorted-array
// Time Complexity O(2*log(n));
//Space COmplexity O(1)


int findPivot(vector<int>& nums){
        int left = 0;
        int right = nums.size()-1;
        
        while(left<=right){
            int mid = (left + right)/2;
           
            
            if(mid+1<nums.size() && nums[mid]>nums[mid+1])
                return mid;
            
            if(nums[mid]>=nums[left])
                left = mid+1;
            
            else
                right = mid-1;
        }
        
        return -1;
    }
int binarySearch(vector<int> nums, int left, int right, int& key){
        
        while(left<=right){
            int mid = (left+right)/2;
            
            if(nums[mid]==key)
                return mid;
            
            if(nums[mid]>key)
                right = mid-1;
            
            else
                left = mid+1;
            
        }
        return -1;
    }
int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        
        if(nums.size() == 1)
            return (nums[0]==target) ? 0 : -1;
        
        int pivot = findPivot(nums);
   
        
        if(pivot == -1)
            return binarySearch(nums,0,nums.size()-1,target);
        
        int key = binarySearch(nums,0,pivot,target);
        if(key != -1)
            return key;
        
        return binarySearch(nums,pivot+1,nums.size()-1,target);
        
}
