//https://leetcode.com/problems/roman-to-integer/
//Time Complexity O(N) I just
//Space COmplexity O(1) the hash map is constant
//Time To Completion 40min
//Sometimes you need to Think backwards it makes think easier/
int romanToInt(string s) {
        unordered_map<char,int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int num = 0;
        int size = s.size()-1;
        for(int i = size; i>=0; i--){
            
            
            if( i<size && roman[s[i]]<roman[s[i+1]] && (s[i]=='I' || s[i]=='X' || s[i]=='C' || s[i]=='M')){
                num-=roman[s[i]];
            }
            else{
                num+=roman[s[i]];
            }
                
        }
        return num;
}
