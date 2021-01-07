#include <bits/stdc++.h>
using namespace std;


bool kmp (string& s, string& p){
	vector<int> table(p.size(),0);
	
	int left = 0;
	int right = 1;
	
	int amount = 0;
	while(right < p.size()){
		while(left > 0 && p[left]!=p[right]){
			left = table[left-1];
		}
		
		if(p[left] == p[right])
			table[right] = ++left;
		else
			table[right] = 0;
			
		right++;
		
	}
	
	
	for(auto elem : table){
		cout<<elem<<" ";
	}



	int i = 0;
	int j = 0;
	while(i < s.size() && j < p.size()){
		while(j>0 && p[j] != s[i]){
			j = table[j-1];
		}
		
		if(p[j] == s[i]){
			j++;
			
		}
		i++;
		
		
	}

	
	return j>=p.size();
	
	
}
int main(){

	string s = "";
	string p = "";
	cin >> s;
	cin >> p;
	cout<<s<<endl<<p<<endl;
	if(kmp(s, p))
		cout<<"true";
	else
		cout<<"false";
	cout<<endl;
	return 0;
}
