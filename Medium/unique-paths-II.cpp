//https://leetcode.com/problems/unique-paths-ii/submissions/
//Time Complexity O(N*M)
//SPace O(1) or O(N) if i use or dont use the obstacle matrix as my memo;

///TIme to completion 10min
int pathHelper(vector<vector<int>>& obstacleGrid, int i, int j, vector<vector<int>>& memo){
        if(i>=obstacleGrid.size() || j>= obstacleGrid[0].size())
            return 0;
        
        if(obstacleGrid[i][j]==-1)
            return 0;
        
        if(i>=obstacleGrid.size()-1 && j>= obstacleGrid[0].size()-1)
            return 1;
        
      
        
        if(obstacleGrid[i][j]!=0)
            return obstacleGrid[i][j];
        
      
        
        obstacleGrid[i][j] = pathHelper(obstacleGrid,i+1,j,memo) + pathHelper(obstacleGrid,i,j+1,memo);
        return obstacleGrid[i][j];
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> memo = obstacleGrid;
        
        for(int i = 0; i<obstacleGrid.size(); i++){
           
            for(int j = 0; j<obstacleGrid[i].size(); j++){
                if(obstacleGrid[i][j]==1){
                    obstacleGrid[i][j]=-1;
                }
            }
            
        }   
     
        return pathHelper(obstacleGrid,0,0,memo);
}

int pathHelper(vector<vector<int>>& obstacleGrid, int i, int j, vector<vector<int>>& memo){
        if(i>=obstacleGrid.size() || j>= obstacleGrid[0].size())
            return 0;
        
        if(obstacleGrid[i][j]==1)
            return 0;
        
        if(i>=obstacleGrid.size()-1 && j>= obstacleGrid[0].size()-1)
            return 1;
        
      
        
        if(memo[i][j]!=0)
            return memo[i][j];
        
      
        
        memo[i][j] = pathHelper(obstacleGrid,i+1,j,memo) + pathHelper(obstacleGrid,i,j+1,memo);
        return memo[i][j];
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> memo = obstacleGrid;
        
        for(int i = 0; i<memo.size(); i++){
           
            for(int j = 0; j<memo[i].size(); j++){
                memo[i][j]=0;
            }
            
        }   
     
        return pathHelper(obstacleGrid,0,0,memo);
}
