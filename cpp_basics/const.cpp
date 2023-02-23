#include <iostream> 

int main(){ 
	int q = 5; 

	//Valid 
	const int* const p = &q; 
    q=6;
    std::cout<<*p;

	
	return 0; 
} 
