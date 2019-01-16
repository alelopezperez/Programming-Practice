#include <bits/stdc++.h>
using namespace std;


int main(){
	int matrix[3][3];
	matrix[0][0]=1;
	matrix[0][1]=2;
	matrix[0][2]=3;
	
	matrix[1][0]=4;
	matrix[1][1]=5;
	matrix[1][2]=6;
	
	matrix[2][0]=7;
	matrix[2][1]=8;
	matrix[2][2]=9;
	
	int n=3;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";	
	}
	
	cout<<"\n";	
	for(int j=0; j<n; j++){
		for(int i=n-1; i>=0; i--){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	cout<<"\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";	
	}
	
	cout<<"\n";

	
}
