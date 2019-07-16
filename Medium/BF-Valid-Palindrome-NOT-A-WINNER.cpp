//https://leetcode.com/problems/valid-palindrome/
//Time Complexity O(N) One pointer at the head and one at the tail
//Space Complexity O(1) No extra memory used.
//It was just implemting the palindrome is only faster than 50%
bool isPalindrome(string s) {
        if(s.empty())
            return true;
        int i = 0;
        int j = s.size()-1;
        
        while(i<=j){
            while((i<s.size()) && (s[i]<'A'||s[i]>'Z') && (s[i]<'a' ||s[i]>'z') &&(s[i]<'0'|| s[i]>'9')){
               
                i++;
            }
            
            while((j>=0)&&(s[j]<'A'||s[j]>'Z') && (s[j]<'a' ||s[j]>'z') &&(s[j]<'0' || s[j]>'9')){
                j--;
                
            }
            
            if(i<s.size() && s[i]>='A'&& s[i]<='Z')
                s[i]+=32;
                
            if( j>=0 && s[j]>='A'&&s[j]<='Z')
                s[j]+=32;
            
           
            if((i<s.size()&&j>=0) && s[i]!=s[j])
                return false;
            
            i++;
            j--;
            
        }
        return true;
}
