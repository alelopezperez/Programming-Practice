//https://leetcode.com/problems/sliding-window-maximum/submissions/
//Time Complexity O(2N) since cleaning the 
//Space Copmexity O(N) 
// Learn to use deque (stacks and Queue);
//insert and compare from the back and answer from the front.
//A lot of time


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty() || k == 0)
            return {};
        deque<int> dq;
        vector<int> ans;
        for(int i = 0; i<k; i++){
            
            while(!dq.empty() && nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        
        int i = 0;
        int j = k;
       
        while(j<nums.size()){
            ans.push_back(nums[dq.front()]);
            
            while(!dq.empty() && i>=dq.front())
                dq.pop_front();
          
            
            while(!dq.empty() && nums[j]>=nums[dq.back()])
                dq.pop_back();               
            
            dq.push_back(j);
            
            i++;
            j++;
        }
        ans.push_back(nums[dq.front()]);
        return ans;
        
}
