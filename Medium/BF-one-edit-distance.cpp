//https://leetcode.com/problems/one-edit-distance/
//Time Complexity O(N+M)
//Space Complexity O(1)
//Time To completion 15min
//Just remember that the plus one is only done after the while to check if any string is still one character left to check.
bool isOneEditDistance(string s, string t) {
        int diff=s.size()-t.size();
        if(abs(diff)>1)
            return false;
        int i = 0;
        int j = 0;
        
        int edit = 0;
        
      
        
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                if(edit==1)
                    return false;
                
                if(s.size()>t.size())
                    i++;
                
                else if(t.size()>s.size())
                    j++;
                
                else{
                    i++;
                    j++;
                }
                    
                edit++;
            }
                
        }
        
        if(i<s.size()||j<t.size())
            edit++;
        return edit==1;
        
}
