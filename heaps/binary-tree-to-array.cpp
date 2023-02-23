#include <bits/stdc++.h>

class Node {
public:
	int val;
	Node* left;
	Node* right;
	
	Node(int v){
		val = v;
		left = nullptr;
		right = nullptr;		
	}
};

std::vector<int> binary_to_array(Node* root){
	if(root==NULL)
		return {};
	std::queue<Node*> q;
	q.push(root);
	std::vector<int> ans;
	while(!q.empty()){
		Node* temp = q.front(); q.pop();
		ans.push_back(temp->val);
		if(temp->left)
			q.push(temp->left);
		else
			ans.push_back(-1);
		if(temp->right)
			q.push(temp->right);
		else
			ans.push_back(-1);
		
	}
	
	return ans;
}

void print_bfs(Node* root){
	if(root==NULL)
		return;
		
	std::queue<Node*> q;
	q.push(root);

	while(!q.empty()){
		Node* temp = q.front(); q.pop();
		std::cout<<temp->val<<std::endl;
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
		
	}
}


std::vector<int> binary_to_array_dfs(Node* root){
	std::vector<int> arr;
	if(root){
	
		arr.push_back(root->val);
		std::vector<int> left = binary_to_array(root->left);
		std::vector<int> right = binary_to_array(root->right);
		
		arr.insert(arr.end(), left.begin(), left.end());
		arr.insert(arr.end(), right.begin(), right.end());
		
		
	}
	
	return arr;

}

Node* array_to_tree(std::vector<int>& arr, int i){
	if(i>=arr.size())
		return NULL;
	
	Node* root = new Node(arr[i]);
	root->left = array_to_tree(arr,i*2+1);
	root->right = array_to_tree(arr,i*2+2);
	return root;

	
	
}

void clean(Node* root){
	if(root==NULL)
		return;
	clean(root->left);
	clean(root->right);
	delete(root);
}

int main(){

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	std::vector<int> temp = binary_to_array(root);
	std::cout<<temp.size()<<std::endl;
	for(auto& i :temp)
		std::cout<<i<<std::endl;
		
	std::cout<<std::endl;
	print_bfs(root);
	
	Node* neu = array_to_tree(temp,0);
	std::cout<<std::endl;
	print_bfs(neu);
	
	clean(root);
	clean(neu);
	
	return 0;
}
