//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
//Time Complexity O(N)
//Space COmplxity O(1) or O(N)

vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> uset;
        vector<int> ans;
        
        for(auto num : nums)
            uset.insert(num);
        
        for(int i = 1; i<=nums.size(); i++){
            if(uset.find(i)==uset.end())
                ans.push_back(i);
        }
        return ans;
    
}

vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        
        vector<int> ans;
        for(auto& elem : nums){
            
            if(nums[abs(elem)-1] > 0)
                nums[abs(elem)-1]*=-1;
        }
        
        for(int i =0; i<nums.size(); i++){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    
}
