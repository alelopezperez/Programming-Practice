//https://leetcode.com/problems/longest-common-prefix/
// Time Complexity O(N)
// Space Complexity O(1);
// TIme to completion 30min

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        
        int i = 0;
        int j = 0;
        string ans = "";
        char aux;
        
        for(int i = 0; i<strs[0].size(); i++){
            aux = strs[0][i];
            for(int j = 1; j<strs.size(); j++){
                
                if(i==strs[j].size() || aux != strs[j][i])
                    return ans;
            }
            ans.push_back(aux);
        }
        
        return ans;
}
