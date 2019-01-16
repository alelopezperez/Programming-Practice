#include<iostream>
#include<vector>
#include<algorithm>//it has sort and binary also more that i dont know

using namespace std;


class AnimalNum{
	private:
		int my_num;
	public:
		AnimalNum(){
			this->my_num=4;
		}
		AnimalNum(int n){  //this is how you use a constructor in a class
			this->my_num=n;
		}
		
		int getNum(){
			return this->my_num;
		}
		
};

struct Animal{
	int num;
};
		
int main(){

	vector<Animal> struct_animal(10);
	vector<AnimalNum> class_animal(5);
	vector<int> numeros;
	string ale = "ABCD";

	for(int i=0; i<struct_animal.size(); i++){
		cout<<struct_animal[i].num<<"\n";	
	}
	cout<<"\n";
	for(int i=0; i<class_animal.size(); i++){
		cout<<class_animal[i].getNum()<<"\n";	
	}

	for(int i=0; i<100; i++){
		numeros.push_back(i);	
	}
	cout<<"\n";
	for(int i=0; i<numeros.size(); i++){
		cout<<numeros[i]<<" ";	
	}
	
	sort(numeros.begin(), numeros.end(), greater<int>());
	cout<<"\n";
	for(int i=0; i<numeros.size(); i++){
		cout<<numeros[i]<<" ";	
	}

	cout<<"\n";
	cout<<ale<<"\n";
	sort(ale.begin(), ale.end(), greater<char>());
	cout<<ale<<"\n";
	sort(numeros.begin(), numeros.end());



}






