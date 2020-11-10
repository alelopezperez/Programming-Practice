//https://leetcode.com/problems/brick-wall/
// Time Complexity O(N)
// Space Complexity O(N)

int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> umap;
        
        for(int i = 0; i<wall.size(); i++){
            int sum = 0;
            for(int j = 0; j<wall[i].size()-1; j++){
                sum += wall[i][j];
                umap[sum]++;
            }
        }
        
        int res = wall.size();
        int size = wall.size();
        for(auto elem : umap){
            res = min(res, size-elem.second);
        }
        return res;
}
