#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int main(){
	TreeNode* first = new TreeNode(1);
	cout<<&first<<endl;
	cout<<first<<endl;

	cout<<first->left<<endl;
	cout<<(&(first->left))<<endl;

	

	cout<<first->right<<endl;
	cout<<&(first->right)<<endl;
	return 0;
}
