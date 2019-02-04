//Time Complexity O(n)
//Space Complexity O(n)
//Time to Completion 18min
// There should be  a way to do it withouth stacks.
int minAddToMakeValid(string S) {
        
      stack<char> st;
        
        for(char letter : S){
            if(st.empty()){
                st.push(letter);
            }
            else if(st.top() == '(' && letter == ')'){
                st.pop();
            }
            else{
                st.push(letter);
            }
        }
      
      
        return st.size();
}
