//https://leetcode.com/problems/high-five/submissions/
//Time Complexity O(N*log(n)+5*log(n))
//Space Complexitu O(N)

vector<vector<int>> highFive(vector<vector<int>>& items) {
        sort(items.begin(), items.end(), [](vector<int>& a, vector<int>& b){ return a[0]<b[0];});
        priority_queue<int, vector<int>, greater<int>> min_heap;
        
        int curr_id = 0;
        vector<vector<int>> ans;
        for(auto& pair : items){
            if(curr_id==0) curr_id = pair[0];
            
            else if(curr_id != pair[0] || &pair == &items.back()){
                if(&pair == &items.back()) min_heap.push(pair[1]);
                if(min_heap.size()>5)
                    min_heap.pop();
                int avg = 0;
                while(!min_heap.empty()){
                    avg += min_heap.top();
                    min_heap.pop();
                }
                avg /=5;
                ans.push_back({curr_id,avg});
                curr_id = pair[0];
            }
            min_heap.push(pair[1]);
            
            if(min_heap.size()>5)
                min_heap.pop();
        }
        return ans;
       
}
