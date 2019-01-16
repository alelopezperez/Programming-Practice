#include <bits/stdc++.h>
using namespace std;


bool is_rotation(string s1, string s2){
	string s3 = s1;
	s3.append(s1);
	
	if(s1.size()!=s2.size()){
		return false;	
	}
	if(s3.find(s2)==string::npos){
		return false;	
	}

	return true;

}
int main(){
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	
	cout<<is_rotation(s1,s2)<<"\n";

}
