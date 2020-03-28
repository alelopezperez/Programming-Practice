//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/submissions/
//Time Complexity O(3N) One run through to get all parenthese a second one to mark invalid ones and a third to create the answer
//Space Complexity O(N) I Use a stack
//Time to completion 30min
//EASY

string minRemoveToMakeValid(string s) {
        stack<int> st;
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            
            else if(!st.empty() && s[i]==')' && s[st.top()]=='(')
                st.pop();
            else if( s[i]==')')
                st.push(i);
        }
        while(!st.empty()){
            s[st.top()]='*';
            st.pop();
        }
        
        for(auto i : s){
            if(i!='*')
                ans.push_back(i);
        }
            
            
            
        return ans;
       
}
