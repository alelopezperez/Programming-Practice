//https://leetcode.com/problems/find-the-town-judge/
int findJudge(int N, vector<vector<int>>& trust) {
        set<int> town;
        vector<int> score(N, 0);
        
        for(int i = 0; i<trust.size(); i++){
            town.insert(trust[i][0]);
            int temp = trust[i][1];
           
            score[temp-1]++;
           
        }
        
        int judge = -1;
        
        for(int i = 0; i<N; i++){
            if(score[i]==N-1)
                judge= i+1;
        }
        
        if(judge==-1)
            return judge;
        
        for(int i = 1; i<=N; i++){
            if(town.find(judge)==town.end())
                return judge;
        }
        return -1;
}
    
int findJudge(int N, vector<vector<int>>& trust) {

        if(trust.size()<N-1) return -1;
        vector<int> indegree(N, 0);
        vector<int> outdegree(N, 0);
        
        for(auto p : trust){
            indegree[p[1]-1]++;
            outdegree[p[0]-1]++;
        }
        
        for(int i = 0; i<N; i++){
            if(indegree[i]==N-1 && outdegree[i]==0)
                return i+1;
        }
        return -1;
}

int findJudge(int N, vector<vector<int>>& trust) {

        if(trust.size()<N-1) return -1;
        vector<int> degree(N, 0);
       
        
        for(auto p : trust){
            degree[p[1]-1]++;
            degree[p[0]-1]--;
        }
        
        for(int i = 0; i<N; i++){
            if(degree[i]==(N-1))
                return i+1;
        }
        return -1;
}
