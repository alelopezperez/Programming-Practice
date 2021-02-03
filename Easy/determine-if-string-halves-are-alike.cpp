// https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/
// Time Complexity O(N)
// Space Complexity O(1)

bool halvesAreAlike(string s) {
        
        int set[26] = {0};
        
        set['a'-'a']=1;
        set['e'-'a']=1;
        set['i'-'a']=1;
        set['o'-'a']=1;
        set['u'-'a']=1;
        
        int count = 0;
        int size = s.size()/2;
        for(int i = 0; i<size; i++){
            if(set[tolower(s[i])-'a']==1)
                count++;
            if(set[tolower(s[s.size()-1-i])-'a']==1)
                count--;
        }
        return count==0;
    }
