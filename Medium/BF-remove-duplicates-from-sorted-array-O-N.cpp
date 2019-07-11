//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
//Time Complexity O(N) I just changed the position to first of the non repited ones and stored how many unique charater are
//Space Complexity O(1) No extra space used
//Time TO completion 30min
//READ THE QUESTION FULLY
int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return nums.size();
        
        int prev = nums[0];
        int howmuch = 1;
       
        for(int i = 1; i<nums.size(); i++){
            if(prev != nums[i]){
           
                nums[howmuch] = nums[i];
                howmuch++;
                prev=nums[i];
            }
        }
        return howmuch;
}
