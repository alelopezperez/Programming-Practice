//https://leetcode.com/problems/isomorphic-strings/submissions/
//Time Complexity O(N)
//Space Complexity O(2N)

bool isIsomorphic(string s, string t) {
        unordered_map<char,char> umap;
        unordered_set<char> nolist;
        for(int i = 0; i<s.size(); i++){
            if(umap.find(s[i])==umap.end()){
                
                if(nolist.find(t[i])!=nolist.end()){
                    cout<<t[i];
                    return false;
                }
                umap[s[i]]=t[i];
                nolist.insert(t[i]);
            
            }
            else{
                if(umap[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
        
}
