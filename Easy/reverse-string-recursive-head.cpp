#include <bits/stdc++.h>
using namespace std;

string reverseString(string s, int i = 0){
	string ans = "";
	if(i>=s.size())
		return ans;
		
	ans.append(reverseString(s, i+1));
	ans.push_back(s[i]);

	return ans;
	

}

int main(){
	string a = "aloh";
	
	cout<<reverseString(a)<<endl;
}
