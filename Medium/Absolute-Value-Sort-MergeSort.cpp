//https://www.pramp.com/challenge/4E4NW7NjbnHQEx1AxoXE
// Time Complexity O(N*Log(N))
//SPace Complexity O(N)
//Time To completion 20min
//MY Implementation of Merge Sort

#include <algorithm>
#import <iostream>
#import <vector>


using namespace std;


 
bool comparator(int l, int r){
	if(abs(l)==abs(r))
		return l<r;
	return abs(l)<abs(r);
}

void merge(vector<int>& arr, int low, int mid, int high){
	
	int left = low;
	int right = mid+1;
	
	vector<int> aux;
	while(left <= mid && right <= high){
		
		if(comparator(arr[left],arr[right])){
			aux.push_back(arr[left]);
			left++;			
		}
		else {
			aux.push_back(arr[right]);
			right++;
		}
	}
	while(left <= mid){
		aux.push_back(arr[left]); left++;	
	}

	while(right <= high){
		aux.push_back(arr[right]); right++;	
	}
	
	for(int i = high; i>=low; i--){
		arr[i]=aux.back();
		aux.pop_back();
	} 
}
void mergeSort(vector<int>& arr, int low, int high){

	if (low>=high)
		return;

	int mid = low+(high-low)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, mid, high);
}

vector<int> absSort(const vector<int>& arr1)
{
  vector<int> arr = arr1;
  mergeSort(arr, 0, arr.size()-1);
  return arr;
	
}

int main() 
{
	return 0;
}
