//https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/
//Time Complexity O(2N);
//Space Complexity O(1) in place;

string reverseWords(string s) {
                
        int start = 0;
        for(int i = 0; i<s.size(); i++){
            if(i==s.size()-1 || s[i+1] == ' ') {
                reverse(s.begin()+start, s.begin()+i+1);
                start = i+2;
            }
        }
        
        return s;
}
