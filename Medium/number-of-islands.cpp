//https://leetcode.com/problems/number-of-islands/solution/
// Time Complexity O(N*M)
// Space Complexity O(N*M)

#include <bits/stdc++.h>
using namespace std;
void findneighbors(int i, int j,  int row, int column, vector<vector<char>>& binaryMatrix){
      
      if((i+1)<row && binaryMatrix[i+1][j] == '1'){
	binaryMatrix[i+1][j]='0';
	findneighbors(i+1,j, row,column, binaryMatrix);
      }

      if((i-1)>=0 && binaryMatrix[i-1][j] == '1'){
	binaryMatrix[i-1][j]='0';
	findneighbors(i-1,j, row,column, binaryMatrix);
      }

      if((j+1)<column && binaryMatrix[i][j+1] == '1'){
	binaryMatrix[i][j+1]='0';
	findneighbors(i,j+1, row,column, binaryMatrix);
      }

      if((j-1)>=0 && binaryMatrix[i][j-1] == '1'){
	binaryMatrix[i][j-1]='0';
	findneighbors(i,j-1, row,column, binaryMatrix);
      }
}

void find(int i, int j,  int row, int column, vector<vector<char>>& binaryMatrix){
      	binaryMatrix[i][j]='0';
	stack<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		int n = q.top().first;
		int m = q.top().second;
		q.pop();
		if((n+1)<row && binaryMatrix[n+1][m]=='1'){
			binaryMatrix[n+1][m]='0';
			q.push({n+1,m});
		}

		if((n-1)>=0 && binaryMatrix[n-1][m]=='1'){
			binaryMatrix[n-1][m]='0';
			q.push({n-1,m});
		}

		if((m+1)<column && binaryMatrix[n][m+1]=='1'){
			binaryMatrix[n][m+1]='0';
			q.push({n,m+1});
		}

		if((m-1)<column && binaryMatrix[n][m-1]=='1'){
			binaryMatrix[n][m-1]='0';
			q.push({n,m-1});
		}
	}
	
}

int numIslands(vector<vector<char>>& binaryMatrix) {
      int count = 0;
      for(int i = 0; i<binaryMatrix.size(); i++){
        for(int j =0; j<binaryMatrix[0].size(); j++){
          if(binaryMatrix[i][j]=='1'){
	    binaryMatrix[i][j]='0';	
            findneighbors(i,j,binaryMatrix.size(),binaryMatrix[0].size(),binaryMatrix);
            count++;
          }
        }
      }
    return count;        
}

int main(){
	int s = 1000;
	vector<vector<char>> v;
	for(int i = 0; i<s; i++){
		vector<char> aux;
		for(int j = 0; j<s; j++){
			aux.push_back('1');
		}
		v.push_back(aux);
	}
	cout<<s<<endl;
	cout<<"GOL"<<endl;
	cout<<numIslands(v)<<endl;
	
}
