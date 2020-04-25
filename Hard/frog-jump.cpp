//https://leetcode.com/problems/frog-jump/submissions/
//Time Complexity O(N^3) 
//Space Complexity O(N)
//Time to Completion 45min
//Be careful with the returns;


bool canCross(vector<int>& stones) {
        unordered_set<int> uset;
        for(auto i: stones){
            uset.insert(i);
        }
        map<pair<int,int>, bool> memo;
        int goal = stones.back();
        bool ans = false;
        helper(0,0,uset,ans,goal, memo);
    
        return ans;
    }
    
    
void helper(int curr, int jump, unordered_set<int>& uset, bool& ans, int& goal, map<pair<int,int>, bool>& memo){
        
        if(curr == goal){
            ans |= true;
            return;
        }
        
        if(jump==0){
            if(uset.find(curr + jump + 1)!=uset.end()){
                if(memo.find({curr,jump+1})==memo.end()){                     
                    helper(curr+jump+1, jump+1, uset, ans, goal, memo);
                    memo[{curr,jump+1}] = ans;
                }
            }
        }
        
        if(jump == 1){
            
            if(uset.find(curr + jump)!=uset.end()){
                if(memo.find({curr,jump})==memo.end()){
                    helper(curr+1, jump, uset, ans, goal, memo);
                    memo[{curr,jump}] = ans;
                }
            }
            
            
            if(uset.find(curr+jump+1)!=uset.end()){
                 
                if(memo.find({curr,jump+1})==memo.end()){
                    helper(curr+2, jump+1, uset, ans, goal, memo);
                    memo[{curr,jump+1}] = ans;
                }
            }
        }
        
        if(jump>1){            
            if(uset.find(curr + jump - 1)!=uset.end()){
                if(memo.find({curr,jump-1})==memo.end()){
                    helper(curr+jump-1, jump-1, uset, ans, goal, memo);
                    memo[{curr,jump-1}] = ans;
                }
            }
            
            
            if(uset.find(curr + jump)!=uset.end()){
                if(memo.find({curr,jump})==memo.end()){
                    helper(curr+jump, jump, uset, ans, goal, memo);
                    memo[{curr,jump}] = ans;   
                } 
            }
            
            
            if(uset.find(curr + jump + 1)!=uset.end()){
                if(memo.find({curr,jump+1})==memo.end()){
                    helper(curr+jump+1, jump+1, uset, ans, goal, memo);
                    memo[{curr,jump+1}] = ans;
                }
            }
            
        }
}
