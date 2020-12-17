//https://leetcode.com/problems/goal-parser-interpretation/submissions/
//Time Complexity O(N) one pass
//Space Complexity O(1)

string interpret(string command) {
        
        string ans = "";
        for(int i = 0; i<command.size(); i++){
            if(command[i] == 'G')
                ans.push_back('G');
            else if(command[i+1]== 'a'){
                ans.push_back('a');
                ans.push_back('l');
                i+=3;
            }
            else{
                ans.push_back('o');
                 i++;
            }
            
        }
        return ans;
        
}
