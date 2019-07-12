//https://leetcode.com/problems/permutations/submissions/

void perm_helper(vector<int>& nums, vector<int>perm, vector<vector<int>>* ans, vector<bool> visited){
        
        if(perm.size()==nums.size()){
            ans->push_back(perm);
           
        }
        
        for(int i = 0; i<nums.size(); i++){
            vector<int>perm_temp = perm;
            vector<bool> visited_temp = visited;
            if(!visited[i]){
                visited_temp[i]=true;
                perm_temp.push_back(nums[i]);  
                perm_helper(nums,perm_temp,ans,visited_temp);
            }
        }
        
}

vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(),false);
        
        perm_helper(nums, {}, &ans, visited);
        return ans;
}
