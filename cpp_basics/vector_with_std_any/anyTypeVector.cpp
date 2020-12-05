#include<bits/stdc++.h>

int main(){
	
	std::vector<std::variant<int,std::string>> v;
	v.push_back("Hola");
	v.push_back(1);
	
	
	std::cout<<v[0]<<std::end;
	return 0;
}
