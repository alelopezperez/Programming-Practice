//https://leetcode.com/problems/daily-temperatures/submissions/
//Time Complexity O(n) I go throught the array only once
//Space Complexity O(n) I use a stack that could be the size of the n elements of the array
//I learned that you can store the pos of the array instead of the value of the array and use the value of it to get the desired result

vector<int> dailyTemperatures(vector<int>& T) {

        vector<int> ans (T.size());
        int last = T.size()-1;
        stack<int> st;
        for(int i = last; i>=0; i--){
            
		while(!st.empty() && T[i]>=T[st.top()]){
                	st.pop();
            	}
                
            	if(st.empty()){
                    	ans[i]=0;
            	}
            
           	else{
                	ans[i]=st.top()-i;
            	}               
            
            	st.push(i);
 
        }
        return ans;
        
}
