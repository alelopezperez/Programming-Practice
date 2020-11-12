///https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//Time COmplexity O(N)
//Space Complexity O(N)
string removeDuplicates(string S) {
        stack<char> st;
        
        for(auto& letter : S){
            if(st.empty())
                st.push(letter);
            else{
                if(st.top()==letter)
                    st.pop();
                else
                    st.push(letter);
            }
        }
        
        string ans  = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
}

string removeDuplicates(string S) {
        string ans = "";
        
        for(auto& elem : S){
            if(ans.empty())
                ans.push_back(elem);
            else{
                if(ans.back() == elem)
                    ans.pop_back();
                else
                    ans.push_back(elem);
            }
        }
        return ans;
        
}
