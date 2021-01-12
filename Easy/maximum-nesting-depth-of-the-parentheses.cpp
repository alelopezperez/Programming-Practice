//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/
//Time Complexity O(N)
//Space Complexity O(1)
int maxDepth(string s) {
        stack<char> vps;
        int count  = 0;
        int max = 0;
        for(auto& letter : s){
            
                if(letter == ')'){
                    count--;
                    vps.pop();
                }
                    
                else if(letter == '('){
                    count++;
                    vps.push('(');
                    if(count>max)
                        max=count;
                }
            
        }
        
        return max;
        
}
