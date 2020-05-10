//https://leetcode.com/problems/unique-paths/submissions/
//Time Complexity O(n*m)
// Space Complexity O(N)
//I kinda know DP
int pathsHelper(int i, int j, int& max1, int& max2, vector<vector<int>>& memo){
        if(i>=max1 || j>=max2)
            return 0;
        
        if(i==(max1-1) && j == (max2-1))
            return 1;
        
        if(memo[i][j]!=-1)
            return memo[i][j];
    
        memo[i][j] = pathsHelper(i+1,j,max1,max2,memo)+pathsHelper(i,j+1,max1,max2,memo);
        return memo[i][j];
     
}
    
void tailPathsHelper(int i, int j, int& max1, int& max2, vector<vector<int>>& memo){
        
        if(i==(max1-1) && j == (max2-1))
            memo[i][j]=1;
        
        if(memo[i][j]==0){
            if((i+1)<max1){
                if(memo[i+1][j]==0){
                   
                    tailPathsHelper(i+1,j,max1,max2,memo);
                }
            
                memo[i][j] += memo[i+1][j];
            }
            
            if((j+1)<max2){
                if(memo[i][j+1]==0){
                    tailPathsHelper(i,j+1,max1,max2,memo);
                }
                memo[i][j] += memo[i][j+1];
            }            
        }
     
}

int uniquePaths(int m, int n) {
        vector<vector<int>> memo;
        for(int i = 0; i<m; i++){
            vector<int> aux;
            for(int j = 0; j<n; j++){
                aux.push_back(0);
            }
            memo.push_back(aux);
        }
        tailPathsHelper(0,0,m,n,memo);
        return memo[0][0];
}
