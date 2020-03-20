//https://leetcode.com/problems/combination-sum/submissions/
//Time Complexity O(N^2) maybe IDK
//Space Complexity (O(N+M)) the aux; and the unordered map
//Time to completion 30min
//BACKTRACKING!!




vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> aux;
        vector<vector<int>> ans;
       
        helper(candidates, target, ans, aux);
        return ans;
        
}
    
void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& aux, int i=0){
        
        if(target==0){
                ans.push_back(aux);
                return;
                    
        }
        
        if(candidates[i]>target){
            return;
        }
        
        for(int start = i; start<candidates.size(); start++){
            aux.push_back(candidates[start]);
            helper(candidates, (target - candidates[start]), ans, aux, start);
            aux.pop_back();
        }
        
}
