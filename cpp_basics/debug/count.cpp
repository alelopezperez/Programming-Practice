#include<bits/stdc++.h>
using namespace std;

int numberOfMatches(int n) {
	int matches = 0;
	while(n>1){
                
		matches+= (n)/2;
                
		n = (n)/2+n%2;
	}

	return matches;
}

int main(){
	
	cout<<numberOfMatches(2000);
	return 0;
}
