//https://leetcode.com/problems/remove-vowels-from-a-string/submissions/
//Time Complexity O(N)
//Space Complexity O(N)

string removeVowels(string S) {
        string s = "";
        
        for(auto& ch : S){
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                s.push_back(ch);
        }
        
        return s;
}
