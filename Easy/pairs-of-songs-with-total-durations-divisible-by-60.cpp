//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/submissions/
//Time Complexity O(N)
//Space Complexity O(N)

int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> uset(60, 0);
        for(int i=0; i<time.size(); i++){
            if(time[i]%60 == 0)
                count+=uset[0];
            else
                count+=uset[60-(time[i]%60)];
            
            uset[time[i]%60]++;
        }
        
        return count;
}


