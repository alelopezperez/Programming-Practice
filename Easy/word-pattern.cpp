//https://leetcode.com/problems/word-pattern/submissions/
//Time Complexity O(N+M)
//Space Complexity O(N)
bool wordPattern(string pattern, string s) {
        unordered_map<string,int> umap;
        vector<string> words;      
        string temp = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]==' '){
                words.push_back(temp);
                temp ="";
                
            }
            else if(i==s.size()-1){
                temp.push_back(s[i]);
                words.push_back(temp);
            }
            else
                temp.push_back(s[i]);
            
        }
        if(pattern.size()!=words.size())
            return false;
        
        for(int i = 0; i<words.size(); i++){
            
            string letter = "";
            letter.push_back(pattern[i]);
            letter.push_back(' ');
            
            
            if(umap.find(words[i])==umap.end())
                umap[words[i]]=i;
            
            
            if(umap.find(letter)==umap.end())
                umap[letter]=i;
           
            
            cout<<words[i]<<" "<<umap[letter]<<" "<<umap[words[i]]<<endl;
            if(umap[words[i]]!=umap[letter])
                return false;
            
        }
        
        return true;
}
