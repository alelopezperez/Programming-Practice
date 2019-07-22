//https://leetcode.com/problems/minimum-window-substring/submissions/
//Time Complexity O(N)
//Space Complexity O(N)
//Time to Completion ONE WEEK
//I learn to use more memory and TWO POINTER AND SLIDING WINDOW
string minWindow(string s, string t) {
        string ans;
        unordered_map<char,int> map_t;
        unordered_map<char,int> curr_t;
        for(auto N : t){
            if(map_t.find(N)==map_t.end()){
                map_t[N] = 1;
            }
            else{
                map_t[N] += 1;                
            }
        }
        
        int left = 0;
        int right = 0;
        int size = 0;
        int l=-1; int r = -1;
        int mini = INT_MAX;
        while(right < s.size()){
            if(map_t.find(s[right])!=map_t.end()){
                if(curr_t.find(s[right])==curr_t.end()){
                    curr_t[s[right]]=1;
                }
                else{
                    curr_t[s[right]]+=1;
                }
                
                if(curr_t.find(s[right])!=curr_t.end() && curr_t[s[right]]==map_t[s[right]]){
                    size++;                                                           
                }               
               
                
                while(left <= right && size == map_t.size()){
                    
                    if(right-left<mini){
                        l=left;
                        r=right;
                        mini=r-l;
                    }
                    if(curr_t.find(s[left])!=curr_t.end()){
                        curr_t[s[left]]-=1;
                        if(curr_t[s[left]]<map_t[s[left]]){
                            size--;
                        }
                    }
                    left++;
                }
            }
            right++;
        }
        for(int i = l; i<=r; i++){
            ans.push_back(s[i]);
        }
        return ans;
}
