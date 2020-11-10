//https://leetcode.com/problems/meeting-rooms-ii/
//Time Complexity O(N*log(N))
//Space Complexity O(N)


int minMeetingRooms(vector<vector<int>>& intervals) {
        
        if(intervals.empty())
            return 0;
        
        sort(intervals.begin(), intervals.end(),[](vector<int> a, vector<int> b){return a[0]<b[0];});
        
        priority_queue<int,vector<int>, greater<int>> min_heap;
        
        int total=1;
        
        min_heap.push(intervals[0][1]);
        
       
        
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[i][0] >= min_heap.top()){
                min_heap.pop();
                min_heap.push(intervals[i][1]);
            }
            else{
                total++;
                min_heap.push(intervals[i][1]);
            }
        }
        return total;
        
}
