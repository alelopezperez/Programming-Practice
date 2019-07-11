//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Time Complexity O(N^2) Because is N to traverse the array and each erase needd to move each element up one by one.
//Space Complexity O(1) no extra memor used
//THis is inneficient because i dont need to trim or erase the value; i just to reallocate and get how many unique character are.
//Time to completion 30min

int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return nums.size();
        
        int prev = nums[0];
        cout<<nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(prev == nums[i]){
                int j = i-1;
                nums.erase(nums.begin()+i);
                i=j;
            }
            else
                prev=nums[i];
        }
        return nums.size();
}
