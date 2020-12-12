///https://leetcode.com/problems/third-maximum-number/
// Time Complexity O(N + 3*(N-3) +3)
// Space Complexity O(1) Maximum value of the unordered_set will be 4 ints.
int thirdMax(vector<int>& nums) {
        
        unordered_set<int> uset;
        int maxi = INT_MIN;
        for(auto num : nums){
            if(num > maxi)
                maxi = num;
            
            if(uset.find(num) == uset.end())
                uset.insert(num);
            
            if(uset.size() > 3){
                int val = INT_MAX;
                for(auto& k : uset){
                    if(k < val)
                        val = k;
                }
                uset.erase(val);
            }
            
        }
        
        int minim = INT_MAX;
        
        if(uset.size()<3)
            return maxi;
        
        for(auto& k : uset)
            if(k < minim)
                minim = k;
        
        return minim;
                
      
}
