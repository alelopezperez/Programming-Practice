//https://leetcode.com/problems/detect-capital/
//Time To Complexity O(N)
//Space Complexity O(1)
//Notes : just Ifs
//Time To completions 30min
bool detectCapitalUse(string word) {
        
        int start = 0;
        
        if(word[0]>='A' && word[0]<='Z'){
            if(word.size()>=2 && word[1]>='a' &&word[1]<='z'){
                
                for(int i = 1; i<word.size(); i++){
                    if(word[i]>='A' && word[i]<='Z'){
                        return false;
                    }
                }  
                
            }
            else{
                for(auto N : word){               
                    if(!(N>='A' && N<='Z')){
                        return false;
                    }
                }
            }
        }
        
        else{
            for(auto N : word){
                if(N>='A' && N<='Z'){
                    return false;
                }
            }            
        }
        
        return true;
}
