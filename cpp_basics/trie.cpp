#include <bits/stdc++.h>
using namespace std;
//NORMAL BALNACED BST Time Complexity  M * log N where M is maximum string length and N is number of keys in tree.
// TRIE Time Complexity  O(M) time

class Trie {
public:
	Trie* alpha[26];
	//array<Trie*, 26> alpha;
	bool endOfWord;

	
		
};
void insert(Trie* root, string word){
	for (char l : word){
		if(root->alpha[l-'a']==NULL)
			root->alpha[l-'a'] = new Trie();
			root = root->alpha[l-'a'];
	}
	root->endOfWord = true;
}

bool find(Trie* root, string word){
	for (char l : word){
		if(root->alpha[l-'a'] == NULL)
			return false;
		else
			root = root->alpha[l-'a'];
			
	}
	
	return root->endOfWord;
} 

int main (){
	Trie* root = new Trie();
	string palabra = "hola";
	insert(root, palabra);
	insert(root, "hol");
	string p2 = "za";
	cout<<find(root, "hol")<<"\n";
	return 0;
}





["ogz","eyj","e","ey","hmn","v","hm","ogznkb","ogzn","hmnm","eyjuo","vuq","ogznk","og","eyjuoi","d"]











