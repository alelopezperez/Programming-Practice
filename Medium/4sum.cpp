//https://leetcode.com/problems/4sum/submissions/
// Time COmplexity O(N^3)
// Space Complexity O(1)
// TIME TO COMPLETION 1 HOUR 
// REALLY HARD!!!

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        for(int i = 0; i<nums.size()-3; i++){  
            for(int j = i+1; j<nums.size()-2; j++){                
                int sum = nums[i]+nums[j];
                
                int low = j+1;
                int high = nums.size()-1; 
                
                while(low<high){
                   
                    if(sum + nums[low] + nums[high] == target){
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int curr = low;
                        while(low<high && nums[curr]==nums[low]){low++;}
            
                        curr = high;
                        while(low<high && nums[curr]==nums[high]) high--;
                        
                        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
                        while(j+1<nums.size() && nums[j]==nums[j+1])j++;
                    }
                    
                    else if(sum + nums[low] + nums[high] > target)
                        high--;
                    else
                        low++;
                    
                    
                }
               
            }
           
        }
        
        return ans;
}
