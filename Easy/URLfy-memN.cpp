#include <bits/stdc++.h>
using namespace std;

string urlfy(string s){
	string aux;
	string space="%20";
	
	for(int i=0; i<s.size(); i++){
		if(s[i]==' '){
			aux.append(space);		
		}
		else{
			aux.push_back(s[i]);
		}
	}
	
	return aux;
}
int main(){
	string s;
	getline(cin, s);
	cout<<urlfy(s)<<"\n";
	return 0;
}
