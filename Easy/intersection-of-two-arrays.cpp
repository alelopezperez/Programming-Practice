//https://leetcode.com/problems/intersection-of-two-arrays/
//Time Complexity O(N)
//Space Complexity O(N)
//Notes: Easy intersection of two sets
//Time To Completion 15min
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uset;
        vector<int> ans;
                    
        for(auto N: nums1){
            if(uset.find(N)==uset.end())
                uset.insert(N);
            
        }
        
        int i = 0;
        unordered_set<int> res;
        while(i<nums2.size()){
            
            if(uset.find(nums2[i])!=uset.end() && res.find(nums2[i])==res.end()){
                    res.insert(nums2[i]);
            }
                 
            i++;
        }
        
        
        ans.insert(ans.end(), res.begin(), res.end());
        return ans;
        
}
