
#include <iostream>
#include <vector>
using namespace std;

//this function is not needed
void anotherFunc(const int& num){
	std::cout<<num<<endl;
}

void doSomething(const std::vector<int>& nums, void(*printEach)(const int&)){
	for(auto& num : nums)
		printEach(num);
		
}
int main()
{

    	std::vector<int> nums = {1,2,3};
    	
    	doSomething(nums, [](const int& a){ std::cout<<a<<endl;});
    	
    	int a = 13;
    	int* b = &a;
    	
    	auto lam = [&b](){cout<<&b<<endl;};
    	auto lam1 = [&b](){cout<<&b<<endl;};
    
    	lam();
    	lam1();

    return 0;
}

