//https://leetcode.com/problems/meeting-rooms/
//Time Complexity O(N*log(n))
//Space COmplexity O(1)
bool canAttendMeetings(vector<vector<int>>& intervals) {
        
        if(intervals.size()<=1)
            return true;
        
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){return a[0]<b[0];});
        for(int i = 0; i<intervals.size()-1; i++){
            if(intervals[i][1] > intervals[i+1][0])
                return false;
        }
        return true;
        
}
