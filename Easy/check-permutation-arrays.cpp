#include <bits/stdc++.h>
using namespace std;
// Time Complexity O(n)
//Space Complexity O(128)=O(1) constant.		
bool check_permutation(string s1, string s2){

	if(s1.size() != s2.size()){
		return false;
	}

	int letras[128]={0}; // This is how you initialize an array in all zeros.
	
	for(int i = 0; i<s1.size(); i++){
		letras[s1[i]]++;
	}
	
	for(int i = 0; i<s2.size(); i++){
		letras[s2[i]]--;
		
		if(letras[s2[i]]<0){
			cout<<"NOOO\n";
			return false;
		}
	}
	
	cout<<"SIII\n";
	return true;

}

int main(){
	string s1;
	string s2;
	
	cin>>s1;
	cin>>s2;
	
	check_permutation(s1,s2);
	
	return 0;
	
}
