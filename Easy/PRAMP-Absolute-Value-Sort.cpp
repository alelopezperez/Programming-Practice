//https://www.pramp.com/challenge/4E4NW7NjbnHQEx1AxoXE
//Time Complexity O(N*Log(N))
//Space Complexity O(1)
//I Need to Learn HEAP SORT
#include <algorithm>
#import <iostream>
#import <vector>


using namespace std;


 
bool compare (int i,int j) {
  if(abs(i) < abs(j))
    return true;
  
  if(abs(i) > abs(j))
    return false;
  
  if(abs(i)==abs(j)){
    if(i<j)
      return true;
  }   
    
  if(i<j)
    return true;
    
  return false;
    
}

vector<int> absSort(const vector<int>& arr1)
{
  vector<int> arr = arr1;
  sort(arr.begin(), arr.end(), compare);
  return arr;
	
}

int main() 
{
	return 0;
}

