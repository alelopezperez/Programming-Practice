//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Time COmplexity O(N)
//Space COmplexity O(26) ~ O(1)
//I learned to use double pointer via sliding windows
//Time To Copmpletion 30min
int lengthOfLongestSubstring(string s) {
          if(s.empty())
            return 0;
        int hash[95];
        int initial = 0;
        int len=0;
        
        for (int i = 0; i < 95; i++) 
            hash[i] = -1; 
        
        for(int i = 0; i < s.size(); i++){
          
            if(hash[s[i]-' '] != -1 ){
                if (hash[s[i]-' ']+1 >= initial)
                    initial = hash[s[i]-' ']+1; 
                hash[s[initial]-' ']=initial;                
                hash[s[i]-' ']=i;               
            }
            else{
                hash[s[i]-' '] = i;
            }
            
            int curr = i-initial;
            if(curr > len)
                len = curr;
        }
        return len+1;
}
