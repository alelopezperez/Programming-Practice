// Time Complexity O(n+m)
// Space COmplexity O(N+M)

string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_set<string> ban;
        for(auto word : banned)
            ban.insert(word);
            
        string builder="";
        
        unordered_map<string, int> umap;
        
        pair<string, int> common;
        common.first = "";
        common.second = 0;
        
        for(int i = 0; i<paragraph.size(); i++){
            
            if(isalpha(paragraph[i])){
                builder+=tolower(paragraph[i]);   
            }
            
            else{
               
                while(i+1 < paragraph.size() && !isalpha(paragraph[i+1]))
                    i++;
                
                if(ban.find(builder) != ban.end()){
                    builder="";
                    continue;
                }
                if(umap.find(builder)==umap.end())
                    umap[builder]=1;
                else
                    umap[builder]=umap[builder]+1;
                
                if(umap[builder] > common.second){
                    common.first = builder;
                    common.second = umap[builder];
                }
                builder="";
                
                
            }
            
        }
        if(umap.find(builder)==umap.end())
            umap[builder]=1;
        else
            umap[builder]=umap[builder]+1;
                
        if(umap[builder] > common.second){
            common.first = builder;
            common.second = umap[builder];
        }
               
        
        return common.first;
    }
