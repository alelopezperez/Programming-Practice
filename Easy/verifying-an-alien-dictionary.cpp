//https://leetcode.com/problems/verifying-an-alien-dictionary/submissions/
// Time Complexity O(N)
// Space Complexity O(N)
// I leaned how to compare adjecent elements 

bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> dict;
        
        for(int i = 0; i<order.size(); i++){
            dict[order[i]]=i;
        }
        
        
        
        for(int i = 0; i<words.size()-1; i++){
            string word1 = words[i];
            string word2 = words[i+1];
            
            int index = 0;
            
            while(index < word1.size() && index < word2.size() && word1[index]==word2[index]){
                index++;
                
            }
            if(index < word1.size() && index < word2.size()){                
                if(dict[word1[index]] > dict[word2[index]]){
                    return false;
                }
            }
            else{
                if(word1.size()>word2.size())
                    return false;
            }
            
        }
        return true;
        
        
}
