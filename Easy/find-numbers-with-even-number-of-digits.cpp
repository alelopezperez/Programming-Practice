//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//Time Complexity O(1)
//Space Complexity O(1)
int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for(auto& num : nums){
            
            if((int)(log10(num)+1) % 2 == 0)
                count++;
        }
        
        return count;
}
