//https://leetcode.com/problems/height-checker/submissions/
//Time Complexity O(N*log(n))
//Space COmplexity O(N)


int heightChecker(vector<int>& heights) {
        vector<int> cpy = heights;
        sort(cpy.begin(), cpy.end());
        int count = 0;
        for(int i = 0; i<cpy.size(); i++){
            if(cpy[i]!=heights[i])
                count++;
        }
        return count;
}
