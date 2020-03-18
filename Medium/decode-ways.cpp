//https://leetcode.com/problems/decode-ways/
//Time Complexity O(N) meomization
//Space COMplecity O(N) size of map
//CREATE TREE A USE A MAP FOR MEMOIZATION

void helper(string& s, int& ans, int curr, int start, unordered_map<int,int>& umap){
        
        if (s[start] == '0') {
            return;
        }
        
        if(start>0 && curr==0 || curr>26)
            return;
        
        if(start == s.size()){
            if(curr>=1 && curr<=26){
                ans++;
            }      
            return;
        }
        
        if(umap.find(start)!=umap.end()){
            ans+=umap[start];
            return;
        }
        
        curr = stoi(s.substr(start, 1));
        helper(s, ans, curr, start+1,umap);
    
        if(start != s.size()-1 ){
            curr = stoi(s.substr(start, 2));
            helper(s, ans, curr, start+2,umap);
        }
        
        umap[start]=ans;
        
}
int numDecodings(string s) {
        if(s.size()==0)
            return 0;
        int ans = 0;
        int curr = 0;
        unordered_map<int,int> umap;
        helper(s, ans, curr, 0, umap);
        return ans;
}
