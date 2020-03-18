//https://leetcode.com/problems/kth-largest-element-in-an-array/
//Time Complexity O(NlogN) cuz of heap
//Space COMplecity O(k) size of heap of the kth 
//LEARN TO USE HEAP WHEN NECESARY

int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > min_heap;
        
        for(auto i : nums){
            min_heap.push(i);
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        
        return min_heap.top();
}
