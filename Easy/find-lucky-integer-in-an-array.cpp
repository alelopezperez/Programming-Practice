//https://leetcode.com/problems/find-lucky-integer-in-an-array/
//Time Complexity O(N) it could be O(1) since max 500
//Space COmpelxity O(N) it could O(1) since max is 500

int findLucky(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        for(auto& num : arr)
            umap[num]++;
        
        int candidate = -1;
        for(auto& pos : umap){
            if(pos.second == pos.first && pos.first > candidate)
                candidate = pos.first;
        }
        
        return candidate;
}
