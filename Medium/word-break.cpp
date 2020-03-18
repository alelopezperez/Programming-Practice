//https://leetcode.com/problems/word-break/
//Time Complexity O(N^2) meomization
//Space COMplecity O(N) size of map
//CREATE TREE A USE A MAP FOR MEMOIZATION

bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> uset;
        
        for(auto word : wordDict){
            uset.insert(word);
        }
        bool ans = false;
        int find=0;
        set<pair<int,int>> uset2;
        helper(0,0,uset,s,ans,find,uset2);
        return ans;
}
    
void helper(int start, int end, unordered_set<string>& uset, string& s, bool& ans,int& find, set<pair<int,int>> & uset2){
        if(ans)
            return;
        
        while(end<s.size()){
            if(uset2.find(make_pair(start,end)) != uset2.end()){
                return;
                
            }
            if(uset.find(s.substr(start,end-start+1))!=uset.end()){
                find++;
                if(end == s.size()-1){
                    ans|=true;
                    return;
                }
                helper(end+1,end+1,uset,s,ans,find,uset2);
                if(!ans){
                    for(int i = start+1; i<s.size(); i++){
                        if(uset.find(s.substr(start,i-start+1))!=uset.end()){
                            helper(end+1,end+1,uset,s,ans,find,uset2);
                        }
                    }
                    uset2.insert(make_pair(start,end));
                }
                
            }
            
            end++;  
            
        }
    
    }
