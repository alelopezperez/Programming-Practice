//https://leetcode.com/problems/maximum-number-of-balloons/
//Time Complexity O(N+26)
//Space Complexity O(26*sizeof(char)))
int maxNumberOfBalloons(string text) {
        int alpha[26];
        
        const string b = "balon";
        int count = INT_MAX;
        
        for(int i = 0; i<26; i++){
            alpha[i]=0;
        }
        
      
        for(auto& ch : text){
            alpha[ch-'a']++;
        }
        
        alpha['l'-'a']/=2;
        alpha['o'-'a']/=2;
        
        
        for(auto& ch : b){
            if(alpha[ch-'a']<count)
                count=alpha[ch-'a'];
        }
        
        if(count<=0)
            return 0;
        return count;    
}
