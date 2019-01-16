#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
	unordered_set<int> map;
	int sum;
	
	while(sum != 1){
		sum=0;
		if(map.find(n)==map.end()){
				cout<<"PONER "<<n<<"\n";
				map.insert(n);
			}
		else{
				return false;
		}
		while(n!=0){
			
			
			sum = sum + (n%10)*(n%10);
			n = n/10;
			
		}
		cout<<sum<<"\n";
		n = sum;
	}
	return true;
}
int main(){
	
	if(isHappy(7)){
		cout<<"YES\n";
	}
	return 0;
}
