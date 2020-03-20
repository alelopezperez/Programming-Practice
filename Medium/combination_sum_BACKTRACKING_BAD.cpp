//https://leetcode.com/problems/combination-sum/submissions/
//Time Complexity O(M!)
//Space Complexity (O(N+M)) the aux; and the unordered map
//Time to completion 30min
//BACKTRACKING!!

struct VectorHash {
        size_t operator()(const std::vector<int>& v) const {
            std::hash<int> hasher;
            size_t seed = 0;
            for (int i : v) {
                seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
            }
            return seed;
        }
};
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> aux;
        vector<vector<int>> ans;
        unordered_set<vector<int>, VectorHash> unq;
        helper(candidates, target, ans, aux, unq);
        return ans;
        
}
    
void helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& aux, auto& unq, int i=0){
        
        if(target==0){
                if(unq.find(aux)==unq.end()){
                    unq.insert(aux);
                    ans.push_back(aux);
                }
                return;
                    
        }
        
        if(target<0){
            
            return;
        }
        
        for(int start = i; start<candidates.size(); start++){
            aux.push_back(candidates[start]);
            helper(candidates, (target - candidates[start]), ans, aux, unq, start);
            helper(candidates, (target - candidates[start]), ans, aux, unq, start+1);
            aux.pop_back();
        }
        
}
