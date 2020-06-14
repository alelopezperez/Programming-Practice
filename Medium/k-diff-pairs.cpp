
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findPairsWithGivenDifference( const vector<int>& arr, int k) 
{
  vector<vector<int>> ans;
  unordered_set<int> uset;
  for(auto i: arr){
    uset.insert(i);
  }
  
  for(auto i : arr){
    int x = i+k;
    if(uset.find(x)!= uset.end()){
      ans.push_back({x,i});
    }
  }
  
  return ans;
  
}
// Time Complexity O(2N) since we go through the array twice
// Space Complexity O(N) where could be size of array.
int main() {
  vector<int> arr ={3,1,4,1,5};
  int k = 1;
  vector<vector<int>> ans = findPairsWithGivenDifference(arr,k);
  for(auto i: ans){
    cout<<i[0]<<" "<<i[1]<<endl;
  }
  return 0;
}
