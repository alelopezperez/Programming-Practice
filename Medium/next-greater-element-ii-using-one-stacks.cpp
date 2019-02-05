
//Revised version has same complexity but cleaner code
//Time Complexity O(2N) I go through the array twice
//Space complexity O(2N) since is filled the stack once then i re-use it for getting the answer.
vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> main;
        int size = nums.size()-1;
        vector<int> ans(nums.size());
        for(int i = size; i>=0; i--){
            main.push(nums[i]);
        }
        
        for(int i = size; i>=0; i--){
            while(!main.empty() && main.top()<=nums[i]){
                main.pop();                
            }
            if(main.empty()){             
                    ans[i] = -1;
             
            }
            else{
                ans[i]=main.top();
            }
            main.push(nums[i]);
        }
        
        return ans;
        
}
