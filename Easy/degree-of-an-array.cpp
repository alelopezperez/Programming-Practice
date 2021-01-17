//https://leetcode.com/problems/degree-of-an-array/submissions/
//Time Complexity O(1N) one pass
//Space Complexity O(N) 

int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,pair<int,pair<int,int>>> umap;
        
        int maxi = -1;
        int pos = -1;
        int len = INT_MAX;
        
        for(int i = 0; i<nums.size(); i++){
            if(umap.find(nums[i]) == umap.end()){
                umap[nums[i]].first = 1;
                umap[nums[i]].second = make_pair(i,i);
            }
            else{
                umap[nums[i]].first++;
                umap[nums[i]].second.second = i;
            }
            
            if(umap[nums[i]].first > maxi) {
                maxi = umap[nums[i]].first;
                pos = nums[i];
                len = umap[nums[i]].second.second - umap[nums[i]].second.first;
            }
            else if(umap[nums[i]].first == maxi && len > umap[nums[i]].second.second - umap[nums[i]].second.first){
                    maxi = umap[nums[i]].first;
                    pos = nums[i];
                    len = umap[nums[i]].second.second - umap[nums[i]].second.first;
            }
        }
        return len+1;
}
