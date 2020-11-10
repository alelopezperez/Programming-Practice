//https://leetcode.com/problems/top-k-frequent-words/
//Time Complexity O(N*log(k))
//Space Complexity
//Tip: decltype for specefic min_heap, and in min heap is greater
vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> umap;
        auto comp = [](pair<int,string> p1, pair<int,string>p2){
            if(p1.first == p2.first)
                return p1.second<p2.second;
            return p1.first>p2.first;
            
        };
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp)> min_heap(comp);
        
        for(auto word : words){
            if(umap.find(word) == umap.end())
                umap[word]=1;
            else
                umap[word]++;
        }
        
        for(auto word : umap){
         
            min_heap.push({word.second,word.first});
            if(min_heap.size()>k)
                min_heap.pop();
            
        }
        vector<string> ans;
      
        
        
        while(!min_heap.empty()){
            ans.push_back(min_heap.top().second);
            min_heap.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
}

