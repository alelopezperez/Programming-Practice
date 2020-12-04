//https://leetcode.com/problems/length-of-last-word/submissions/
//Time Complexity O(N)
//Space Compelxity O(1)

int lengthOfLastWord(string s) {
        
        int last = 0;
        
        int i = s.size()-1;
        
        while(s[i] == ' ')
            i--;
        
        while(i>=0 && s[i] != ' '){
            last++;
            i--;
        }
        return last;
}
