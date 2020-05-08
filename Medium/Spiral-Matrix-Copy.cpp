//https://leetcode.com/problems/spiral-matrix/solution/
//Time Complexity O(N*M) = O(N) since is the size of the matrix
// Space Complexity O(1)
//Practice More Matrix problems.
vector<int> spiralCopy( const vector<vector<int>>& inputMatrix ) 
{
  int row = inputMatrix.size();
  int column = inputMatrix[0].size();
  
  int top = 0;
  int bottom = row -1;
  
  int left = 0;
  int right = column-1;
  
  
  vector<int> ans;
  while(left <= right && top <= bottom){
    
    //right
    for(int k = left; k<=right; k++)
      ans.push_back(inputMatrix[top][k]);
    top ++;
    
    //down
    for(int k = top; k<=bottom; k++)
      ans.push_back(inputMatrix[k][right]);
    right --;
    
    //left
    if(top<=bottom){
      for(int k = right; k>=left; k--)
        ans.push_back(inputMatrix[bottom][k]);
      bottom --;
    }
    
    //up
    if(left <= right){
      for(int k = bottom; k>=top; k--)
        ans.push_back(inputMatrix[k][left]);
      left++;
    }

  }
  return ans;
    
  
}

