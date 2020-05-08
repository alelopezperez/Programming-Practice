#include <bits/stdc++.h>

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

int main(){
	vector<int> arr = {0,-2,-6,6,4,3,2,1};
	for(auto i : arr)
		cout<<i<<endl;
	cout<<endl;
	mergeSort(arr, 0, arr.size()-1);
	
	for(auto i : arr)
		cout<<i<<endl;
	return 0;
}


