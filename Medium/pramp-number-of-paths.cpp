//BEst Solution O(N^2)
// Space O(N^2);




int Paths(int x, int y, int& n, vector<vector<int>>& memo){
  if(x>=n || y>=n){
    return 0;
  }
  
  if(x == n-1 && y == n-1){
    memo[x][y]=1;
  }
  

  if(memo[x][y]!=-1)
    return memo[x][y];
  if(!(y>=x))
    return 0;
  memo[x][y] = Paths(x+1,y,n,memo)+Paths(x,y+1,n,memo);
  return memo[x][y];
  
  
    


}
int numOfPathsToDest( int n ) 
{
  int  i = 0;
  int j = 0;
  
  vector<vector<int>> memo;
  for(int i = 0; i<n; i++){
    vector<int> aux;
    for(int k = 0; k<n; k++){
      aux.push_back(-1);
    }
    memo.push_back(aux);
    
  }
  Paths(i, j, n, memo);
  return memo[0][0];
}

