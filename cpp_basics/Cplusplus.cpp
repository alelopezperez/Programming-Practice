#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	
	
	cout << max(1,4);
	cout << "\n";
	cout << "\n";

	vector<int> ale;	
	ale.push_back(3);
	ale.push_back(2);
	ale.push_back(2);
	ale.push_back(1);
	ale.push_back(1);


	set<int> set_r(ale.begin(), ale.end());

	int size = ale.size();
	
	for(int i = 0; i < size; i++){
		cout << ale[i];
		cout << "\n";
	}
	cout << "\n";
	cout << "\n";

	size = set_r.size();
	for(set<int>::iterator it = set_r.begin(); it != set_r.end(); ++it){
		cout << *it;
		cout << "\n";
	}	

	set<int> setale;
	setale.insert(1);
	setale.insert(2);
	setale.insert(5);
	setale.insert(7);
	
	cout<<"\n\nSET\n\n";
	auto it = setale.find(5);
	
	cout<<*it<<"\n";
	cout<<*(next(it))<<"\n";
	cout<<*(it)<<"\n";
	cout<<*(prev(it))<<"\n";
	
	vector<int> p{1,2};
	vector<int> p2{1,2};
	
	vector<int>* ref = &p;

}

















