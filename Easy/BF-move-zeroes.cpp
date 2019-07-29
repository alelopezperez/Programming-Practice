//https://leetcode.com/problems/move-zeroes/
//Time Complexity O(2N)~O(N) since we only go thorugh the array twice.
//Space Complexity O(1) 
//I learned to look at the array and fill and re-check

void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(auto N : nums){
            if(N != 0){
                nums[count]=N;
                count++;
            }
        }
        
        for(int i = count; i<nums.size(); i++){
            nums[i] = 0;
        }
}
