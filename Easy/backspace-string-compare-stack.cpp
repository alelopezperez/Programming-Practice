// https://leetcode.com/problems/backspace-string-compare/submissions/
// O(2n+2m)~O(n) is twice n and m because i have to travese each String twice; one for building the stack and two time for checking equality in the stack
// O(N+M)~O(n) i create a stack for the first and seconf string.
// I Learned to think a little bit more when checking the questiong and alwats try to solve the question looking the array from right to left 
// or in this case, and possibly many other, from left to right
// I also learned that C++ has relational operator for their datat structure like stack,queure,maps, and set and possibly many other.
bool backspaceCompare(string S, string T) {
        stack<char> s1;
        stack<char> t1;
        
        for(int i=0; i<S.size(); i++){
		if(S[i]!='#'){
                	s1.push(S[i]);
            	}
            	else if(!s1.empty())
                    	s1.pop();
        }
        for(int i=0; i<T.size(); i++){
             	if(T[i]!='#'){
                	t1.push(T[i]);
            	}
            	else if(!t1.empty())
                    	t1.pop();             
        }
        
        /*
        if(s1.size()!=t1.size())
            return false;
        
        while(!s1.empty()){
            if(s1.top()!=t1.top())
                return false;
            s1.pop(); t1.pop();
        }
        */
        //I did not know about relation operator validity in stacks
        if(s1!=t1)
		return false;
        return true;   
}
