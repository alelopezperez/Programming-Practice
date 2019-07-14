//https://leetcode.com/problems/3sum/
//Time COmplexity  O(N^2)
//Space Complexity O(1) if it was printed O(N) since we save the subsets
// TIme TO compleion 60min A LOT of Time
//I Learned that i need to use previous knowledge like the 2sum to make more complex question easier.
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        unordered_set<int> unq;
        for(int i = 0; i<(nums.size()); i++){
            int low = i+1;
            int high = nums.size()-1;
            
            if(i==0 || nums[i-1]<nums[i]){
                while(low<high){
                    if(nums[low]+nums[high]+nums[i]==0){

                        ans.insert(ans.end(),{nums[i],nums[low],nums[high]});
                        int curr = low;
                        while(low<high && nums[curr]==nums[low])
                            low++;

                        curr = high;
                        while(low<high && nums[curr]==nums[high])
                            high--;                        
                    }

                    else if(nums[low]+nums[high]+nums[i]<0)
                        low++;

                    else 
                        high--;


                }
            }
            
           
        }
        return ans;
        
}
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        unordered_set<int> unq;
        for(int i = 0; i<(nums.size()); i++){
            int low = i+1;
            int high = nums.size()-1;
            
            while(low<high){
                if(nums[low]+nums[high]+nums[i]==0){
                    
                    ans.insert(ans.end(),{nums[i],nums[low],nums[high]});
                    int curr = low;
                    while(low<high && nums[curr]==nums[low])
                        low++;
                    
                    curr = high;
                    while(low<high && nums[curr]==nums[high])
                        high--;                        
                }
                
                else if(nums[low]+nums[high]+nums[i]<0)
                    low++;
                
                else 
                    high--;
                
                
            }
            while (i+1 < nums.size() && nums[i+1] == nums[i])
                i++; // repeated first digit
           
        }
        return ans;
        
}
