//https://leetcode.com/problems/evaluate-reverse-polish-notation
//Time COmplexity O(n); 
//Space Complexity O(n)
//Time to completion 20min
int evalRPN(vector<string>& tokens) {
        
        int ans = 0;
        int aux;
        int res;
        stack<int> st;
        for(string S : tokens){
            if(S == "+" ){
                aux=st.top();st.pop();
                res = aux+st.top();st.pop();
                st.push(res);   
            }
            else if(S == "-"){
                aux=st.top();st.pop();
                res = st.top()-aux;st.pop();
                st.push(res); 
            }
            else if(S == "*"){
                aux=st.top();st.pop();
                res = aux*st.top();st.pop();
                st.push(res);  
                
            }
            else if(S == "/"){
                cout<<st.top();
                aux=st.top();st.pop();
                res = st.top()/aux;st.pop();
                st.push(res); 
            }
            else{
                st.push(stoi(S));
                
            }
        }
        
        return st.empty() ? 0 : st.top();
    
}
