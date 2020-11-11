//https://leetcode.com/problems/kth-largest-element-in-a-stream/
//Time Complexity N*log(n) then log(N) for each call
//Space Complexit O(N)
// Remember To  Push (when doing Kth or Kth highes elemnt etc)then check in a prioty queue

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int size = 0;
    
    
    KthLargest(int k, vector<int>& nums) {
        size = k;
        
        for(auto& num : nums){
            min_heap.push(num);
            if(min_heap.size()>size)
                min_heap.pop();
              
        }
        
        
        
    }
    
    int add(int val) {
        if(min_heap.empty() || min_heap.size()<size)
            min_heap.push(val);
        
        else if(val>min_heap.top()){
            min_heap.pop();
            min_heap.push(val);
        }
        
        return min_heap.top();
        
    }
};


