//https://leetcode.com/problems/asteroid-collision
//Time Complexity O(2n) since i need to traves the array once and in then I could pop all the stack of the arrays
//Space Complexity O(n) I use only one stack for the solution
//time to completion 60min
vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for(int i=0; i<asteroids.size(); i++){
            if(st.empty()){
                st.push(asteroids[i]);
            }
            else if(st.top()>0 && asteroids[i]>0 || st.top()<0 && asteroids[i]<0 || st.top()<0 &&asteroids[i]>0){
                st.push(asteroids[i]);    
               
            }
            
            else{
                
                while(!st.empty() && abs(asteroids[i])>abs(st.top()) && st.top()>0 && asteroids[i]<0){
                    st.pop();
                }
                
                if(st.empty()||st.top()<0){
                    st.push(asteroids[i]);
                }
                else if(abs(asteroids[i])==abs(st.top()) && st.top()>0 && asteroids[i]<0 ){
                    st.pop();
                  
                }
                
            }
        }
      
        vector<int> ans(st.size());
        int size = st.size()-1;
        for(int i=size; i>=0; i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
        
}
