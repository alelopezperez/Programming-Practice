//https://leetcode.com/problems/jewels-and-stones/submissions/
//Time Complexity O(N)
//Space Complexity O(N)
int numJewelsInStones(string J, string S){
        unordered_set<char> j;
        int count = 0;
        for(auto& ch : J){
            j.insert(ch);
        }
    
        for(auto& ch : S){
            if(j.find(ch)!=j.end())
                count++;
        }
    
        return count;
  
}
