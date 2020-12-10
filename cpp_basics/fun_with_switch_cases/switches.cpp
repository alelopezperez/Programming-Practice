#include<bits/stdc++.h>

enum range {low, mid, high};

range rangesForSwitch(int& val){
	if(val >= 1 && val <= 3)
		return range::low;
		
	else if (val >= 4 && val <= 6)
		return range::mid;
		
	
	return range::high;	
}
int main(){

	int val = 1;
	
	switch (rangesForSwitch(val)){
		case range::low :
			std::cout<<"low";
			break;
			
		case range::mid :
			std::cout<<"mid";
			break;
			
		case range::high :
			std::cout<<"high";
			break;
	}
	return 0;
	
	
}
