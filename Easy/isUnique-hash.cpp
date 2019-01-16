#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	unordered_set<char> se;
	
	for(int i = 0; i<s.size(); i++){

		if(se.find(s[i]) == se.end()){
			se.insert(s[i]);
		}
		else{
			cout<<"NO es UNICO\n";
			break;
		}
	}
	cout<<"SI NO HAY NADA ARRIBA ES UNICO\n";		
	return 0;


}
