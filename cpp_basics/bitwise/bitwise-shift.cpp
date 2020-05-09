#include <bits/stdc++.h>
using namespace std;
int main(){

	int x = 73;
	int i = 1;
	int j = 6;
	if(((x>>i)&1) != ((x>>j)&1)){
		x^=(1<<i);
		x^=(1<<j);	
	}

	cout<<x<<endl;

}
