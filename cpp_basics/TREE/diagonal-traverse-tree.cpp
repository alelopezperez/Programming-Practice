#include <bits/stdc++.h>
using namespace std;
class TreeNode{
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int valor){
		val = valor;
		left = NULL;
		right = NULL;
	}

};

void Diagonal(TreeNode* root, unordered_map<int,vector<int>>& diag, int anterior = 0, int direc=0){
	if(root != NULL){
		int pos = anterior+direc;
		diag[pos].push_back(root->val);
		Diagonal(root->left,diag,pos,1);
		Diagonal(root->right,diag,pos,0);
	}
	
}
int main (){
	TreeNode* root = new TreeNode(8);
	root->left = new TreeNode(3);
	root->left->left = new TreeNode(1);

	root->right = new TreeNode(10);
	root->right->left = new TreeNode(6);
	root->right->left->left = new TreeNode(4);
	root->right->left->right = new TreeNode(7);
	
	root->right->right = new TreeNode(14);
	root->right->right->left = new TreeNode(13);
	
	unordered_map<int,vector<int>> res;
	
	Diagonal(root, res);

	int size = res.size();
	
	for(int i = 0; i<size; i++){
		for(auto N : res[i]){
			cout<<N<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
