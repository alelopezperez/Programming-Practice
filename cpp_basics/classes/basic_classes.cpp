#include <iostream>

class Vector{
public:
	Vector(int s) : elem {new double[s]}, sz{s} {}
	double& operator[](int i) { return elem[i];}
	int size() { return sz; }
private:
	double* elem;
	int sz;
};

int main(){
	Vector v(5);
	for(int i = 0; i<v.size(); i++){
		std::cout<< v[i]<<std::endl;	
	}
	double t[5];
	t[0]=0;
	t[1]=0;
	t[2]=0;
	t[3]=0;
	t[4]=0;
	int a = 4;

	int* p = &a;
	*p = 5;
	std::cout<<*p;
	return 0;
}
