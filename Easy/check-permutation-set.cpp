#include <bits/stdc++.h>
using namespace std;



bool check_permutation(string s){
	unordered_set<char>N;
	
	for(int i = 0; i<s.size(); i++){
		if(N.find(s[i])==N.end()){
			N.insert(s[i]);
		}
		
		else{
			N.erase(s[i]);		
		}	
	}
	
	if(N.size()>1)
		return false;
	return true;
}
int main(){
	string s;
	cin>>s;
	cout<<check_permutation(s)<<"\n";
	return 0;
}
