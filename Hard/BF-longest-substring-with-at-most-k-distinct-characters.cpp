//https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/submissions/
// Time Complexity O(2N) ~ O(N) Since I use slinding windows it will be at worst 2N;
// Space Complexity O(N)
// Time to Completion A LOT more than 2 hours
int lengthOfLongestSubstringKDistinct(string s, int k) {
        int left = 0;
        int right = 0;
        int hash[256];
        for(int i = 0; i<256; i++){
            hash[i]=0;
        }
        int uniq = 0;
        int size = 0;
   
        while(right<s.size()&&left<s.size()){
            if(hash[s[right]]==0){
                hash[s[right]]+=1;
                uniq++;               
            }
            else{
                hash[s[right]]+=1;
            }           
            
            while(uniq>k){
                if((right-left)>size)
                    size  = right-left;
                hash[s[left]]-=1;
                
                if(hash[s[left]] == 0){
                    uniq--;                    
                }
                left++;                
                
            }          
            right++;
            
        }
         if((right-left)>size)
            size  = right-left;
        
        return size;
        
}
