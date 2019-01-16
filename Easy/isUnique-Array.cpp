#include <bits/stdc++.h>

using namespace std;
bool isUnique(string s){
	if ( s.size() > 128) //since there are only 128 character if there is more than one then one char is repeated
		return false;
	bool ch[128] = {false};
	for(int i=0; i<s.size(); i++){
		if(ch[s[i]])
			return false;
		ch[s[i]]=true;
	}
	return true;

}
int main(){
	string s;
	cin>>s;
	cout<<isUnique(s);
	return 0;
}
