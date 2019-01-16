#include <bits/stdc++.h>
using namespace std;


int isSafe(int M[][COL], int row, int col, bool visited[][COL]) { 
    	// row number is in range, column number is in range and value is 1  
	// and not yet visited 
	return	(row >= 0) && (row < ROW) &&      
		(col >= 0) && (col < COL) &&       
		(M[row][col] && !visited[row][col]);  
} 
  
// A utility function to do DFS for a 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void DFS(int M[][COL], int row, int col, bool visited[][COL]) { 
	// These arrays are used to get row and column numbers of 8 neighbours  
	// of a given cell 
	static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1}; 
	static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1}; 
  
	// Mark this cell as visited 
	visited[row][col] = true; 
  
	// Recur for all connected neighbours 
	for (int k = 0; k < 8; ++k){ 
		if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) ){ 
			DFS(M, row + rowNbr[k], col + colNbr[k], visited);
		} 
	}
} 
  
// The main function that returns count of islands in a given boolean 
// 2D matrix 
int countIslands(int M[][COL]) { 
    	// Make a bool array to mark visited cells. 
	// Initially all cells are unvisited 
    	bool visited[ROW][COL]; 
    	memset(visited, 0, sizeof(visited)); 
  
    	// Initialize count as 0 and travese through the all cells of 
    	// given matrix 
    	int count = 0; 
    	for (int i = 0; i < ROW; ++i) 
		for (int j = 0; j < COL; ++j) 
            	if (M[i][j] && !visited[i][j]) // If a cell with value 1 is not 
            	{                         // visited yet, then new island found 
                	DFS(M, i, j, visited);     // Visit all cells in this island. 
                	++count;                   // and increment island count 
            	} 
  
    	return count; 
}

int main() {
 
	int M[5][5]= {  
		{1, 1, 0, 0, 0}, 
        	{0, 1, 0, 0, 1}, 
        	{1, 0, 0, 1, 1}, 
        	{0, 0, 0, 0, 0}, 
        	{1, 0, 1, 0, 1} 
    	}; 
  
    	printf("Number of islands is: %d\n", countIslands(M)); 
  
    	return 0; 
} 
