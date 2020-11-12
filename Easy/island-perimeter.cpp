//https://leetcode.com/problems/island-perimeter/solution/
//Time Complexity O(N*M) size of the matrix
//Space Complexity O(1)
int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                if(grid[i][j]==1){
                    if(i-1 < 0 || grid[i-1][j] == 0)
                        perimeter++;
                    if(i+1 >= grid.size() || grid[i+1][j] == 0)
                        perimeter++;
                    if(j-1 < 0 || grid[i][j-1] == 0)
                        perimeter++;
                    if(j+1 >= grid[i].size() || grid[i][j+1] == 0)
                        perimeter++;
                    
                }
            }
        }
        return perimeter;
        
}
