// https://leetcode.com/problems/first-unique-character-in-a-string/
// Time Complexity O(2N)
// Space Complexity O(N)
int firstUniqChar(string s) {
        unordered_map<char, int> umap;
        
        for(auto letter : s){
            if(umap.find(letter)==umap.end())
                umap[letter]=1;
            else
                umap[letter]=umap[letter]+1;
        }
        
        for(int i = 0; i<s.size(); i++){
            if(umap[s[i]]==1)
                return i;
        }
        
        return -1;
}
