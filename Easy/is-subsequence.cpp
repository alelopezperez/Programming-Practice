//https://leetcode.com/problems/is-subsequence/submissions/
//Time Complexity O(N) where N is size of T
//Space Complexity O(1)
bool isSubsequence(string s, string t) {
        int left = 0;
        int right = 0;
        
        while(left<s.size() && right<t.size()){   
            if(s[left]==t[right])
                left++;
            right++;
        }
        
        return left>=s.size();
}

//Time Complexity O(S+T+S+T)
//Space Complexity O(26)
bool isSubsequence(string s, string t) {
        int alpha[26];
        int beta[26];
        
        if(s.size()>t.size())
            return false;
        
        for(int i = 0; i<26;i++){
            alpha[i] = 0;
            beta[i] = 0;
        }
        
        for(auto& ch : s){
            alpha[ch-'a']++;
        }
        
        for(auto& ch : t){
            beta[ch-'a']++;   
        }
        
        for(auto& ch : s){
            if(alpha[ch-'a']>beta[ch-'a'])
                return false;
        }
        
        int lessthan = -1;
        
        int i = 0;
        int it = 0;
        
        while(i<s.size() && it<t.size()){
            if(s[i]==t[it]){
                i++;
                if(lessthan<i-1){
                    lessthan = i-1;
                   
                }
                
                else
                    return false;
               
            }
            
            it++;
        }
        if(i<s.size())
            return false;
        return true;
}
