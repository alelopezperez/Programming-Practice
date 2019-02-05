
//Time Complexity O(2N) I go through the array twice
//Space complexity O(2N) since i use two stacks
//time to completion 14min
vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> aux;
        stack<int> main;
        int size = nums.size()-1;
        vector<int> ans(nums.size());
        for(int i = size; i>=0; i--){
            aux.push(nums[i]);
        }
        
        for(int i = size; i>=0; i--){
            while(!main.empty() && main.top()<=nums[i]){
                main.pop();                
            }
            if(main.empty()){
                while(!aux.empty() && aux.top()<=nums[i]){
                    aux.pop();
                }
                if(aux.empty()){
                    ans[i] = -1;
                }
                else{
                    ans[i] = aux.top();
                }
                aux.push(nums[i]);
            }
            else{
                ans[i]=main.top();
            }
            main.push(nums[i]);
        }
        
        return ans;
        
}
