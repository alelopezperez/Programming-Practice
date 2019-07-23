//https://leetcode.com/submissions/detail/245460524/
// Time Complexity O(N)
// Space COmplexity O(N)
//time to compeltion 30min
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty())
            return {};
        map<array<int, 26>,int> seto;
        int places = -1;
        vector<vector<string>>  ans;
        for(auto words : strs){
            array<int,26>temp ={0};
            for(auto letter : words){
                temp[letter-'a']+=1;                
            }
            if(seto.find(temp)!= seto.end()){
                    ans[seto[temp]].push_back(words);
            }
            else{
                    places++;
                    vector<string> sec_temp;
                    sec_temp.push_back(words);
                    ans.push_back(sec_temp);
                    seto.insert({temp, places});
            }
        }
        return ans;
}
