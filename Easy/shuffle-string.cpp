//https://leetcode.com/problems/shuffle-string/submissions/
//Time Complexity O(n)
//Space Complexity O(N)
string restoreString(string s, vector<int>& indices) {
        string ans = string(s.size(), '#');
        
        for(int i = 0; i<s.size(); i++){
            ans[indices[i]]=s[i];
        }
        
        return ans;
}
