//https://leetcode.com/problems/reverse-words-in-a-string/
//Time Complexity O(N)
//Space Complexity O(1)
void reverseString(string& s, int l, int r) {
        int left = l;
        int right = r;
        
        char temp;
        
        while(left<right){
            temp = s[left];
            s[left]=s[right];
            s[right]=temp;
            
            left++;
            right--;
        }
        
}

string reverseWords(string s) {
        int left = 0;
        int right = s.size()-1;
        
        
        //remove initial spaces;        
        while(s[0]==' ')
            s.erase(s.begin());
        
        //remove traling spaces;
        while(s[s.size()-1]== ' ')
            s.erase(s.size()-1,1);
        
        //remove in between spaces;
        for(int i = 0; i<s.size()-1; i++){
            while(i+1 != s.size() && s[i]==' ' && s[i+1] == ' '){
                s.erase(i+1, 1);
            }
        }
 
        reverse(s.begin(), s.end());        
        int start=0;
        for(int i = 0; i<s.size(); i++){
            if(i+1==s.size() || s[i+1] == ' '){
                
                reverseString(s,start,i);
                start = i+2;
                i+=1;
            }
        }
        return s;
        
}
