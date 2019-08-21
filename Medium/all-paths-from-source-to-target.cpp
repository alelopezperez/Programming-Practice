//https://leetcode.com/problems/all-paths-from-source-to-target/
//Time Complexity O(N)
//Space Complexiity O(N)
//Notes: using back tracking and recursion
//Time to Completion : 1hr 20min 
void rec(vector<vector<int>>* resp, vector<int>& path, int curr, vector<vector<int>>& graph){
        path.push_back(curr);
        if(curr==graph.size()-1){
            resp->push_back(path);
        }
        else{
            for(int i = 0; i<graph[curr].size();i++){              
                rec(resp, path, graph[curr][i],graph);
            }
        }
        path.pop_back();

}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {       
        vector<vector<int>> resp;
        vector<int> path;
        rec(&resp, path, 0, graph);
        return resp;
        
}
