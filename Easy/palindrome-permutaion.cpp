//https://leetcode.com/problems/palindrome-permutation/solution/
//Time Complexity O(N)
//Space Complexity O(1) remember even though is a Hashset o HashMap it will be at most 128 chars
bool canPermutePalindrome(string s) {
        unordered_map<char,int> uset;
        for(auto& c : s){
            uset[c]++;
        }
        
        int countOne=0;
        for(auto& p : uset){
          if(p.second%2!=0)
              countOne++;
        }
        
        return countOne<=1;
        
}

bool canPermutePalindrome(string s) {
        unordered_set<char> uset;
        
        for(auto& c : s){
            if(uset.find(c)!=uset.end())
                uset.erase(c);
            else
                uset.insert(c);
        }
        
        return uset.size()<=1;
}
