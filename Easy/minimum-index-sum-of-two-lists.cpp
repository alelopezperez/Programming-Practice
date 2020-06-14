//https://leetcode.com/problems/minimum-index-sum-of-two-lists/
// Time Complexity O(2N)
// Space Complexity O(N)
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        unordered_map<string,int> umap;
       
        for(int i = 0; i<list1.size(); i++)
            if(umap.find(list1[i]) == umap.end())
                umap[list1[i]] = i;
        
        int min = INT_MAX;
        for(int i = 0; i<list2.size(); i++){
            if(umap.find(list2[i]) != umap.end()){
                if(umap[list2[i]]+i == min){
                    ans.push_back(list2[i]);
                    min = umap[list2[i]]+i;
                }
                
                else if (umap[list2[i]]+i < min){
                    ans = {};
                    ans.push_back(list2[i]);
                    min = umap[list2[i]]+i;
                }
            }
        }
        
       
        
        return ans;
}
