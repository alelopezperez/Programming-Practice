//https://leetcode.com/problems/remove-element/submissions/
//Time Complexity O(N) 
//Time Complexity Ineficient O(N^2)
//Space Complexity O(1)

int removeElement(vector<int>& nums, int val) {
        
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return nums.size();
}

int removeElement(vector<int>& nums, int val) {
        
        int i = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]!=val){
                nums[i]= nums[j];
                i++;
            }
        }
        
        return i;
}
