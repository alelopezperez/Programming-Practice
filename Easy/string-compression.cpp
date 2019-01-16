#include <bits/stdc++.h>
using namespace std;
string string_compression(string s){
	string n;
	int acumm=0;
	for(int i = 0; i<s.size(); i++){
		acumm++;
		if(s[i]!=s[i+1]){
			n.push_back(s[i]);
			n.append(to_string(acumm));
			acumm=0;
		}
	}

	return n;
		
}

int main(){
	string s;
	cin>>s;
	
	cout<<string_compression(s)<<"\n";
	return 0;
}
