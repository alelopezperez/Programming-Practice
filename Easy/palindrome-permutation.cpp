#include<iostream>
using namespace std;


int main(){

	string s;
	getline(std::cin, s);
	char temp;
	size_t itemp;

	if(s.find(' ')!=string::npos){
			s.erase(s.find(' '),1);
	}

	for(int i = 0; i<s.size(); i++){
	
		
		temp = s[i];
		s.erase(i,1);

		if((itemp = s.find(temp))!=string::npos){
			s.erase(itemp,1);
			i=0;
		}

		else{
			s.insert(i,&temp,1);
		}	
		
		
	}
	
	if(s.size()<=1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

}
