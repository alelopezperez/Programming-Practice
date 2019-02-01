//Todays Lesson: You can use a hash map in a stack problem or whatever
// A Stack in a stack problem can be use with purpose while traversing the array; is not only for filling
// O(n*m) because I go throught the array and the stack in a chained for.
// O(n) I uses a stack and a hash map

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> st;
        unordered_map<int,int> umap;
        vector<int> res;

         if(nums.size()==0)
         	return res;

        for(int i = nums.size()-1; i>=0; i--){
           
          
        	while(!st.empty() && (nums[i]>st.top())){
               
                	st.pop();
                    
            	}
            
            	if(st.empty()){
                	umap[nums[i]]=-1;
                
            	}
            	else{
                	umap[nums[i]]=st.top();
                
            	}
		st.push(nums[i]);
        }
        
        for(int i = 0; i<findNums.size(); i++){
        	res.push_back(umap[findNums[i]]);
        }
        
        return res;
        
}
