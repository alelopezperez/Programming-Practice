//https://leetcode.com/problems/clone-graph/
// Time Complexity AVG: O(N)
// Space Complexity O(N); N of the hash map not of recursion because of tail recursion optimazation
// Time To complextion 15min
// If you already did it do use hasp map

unordered_map<int,Node*> umap;
	Node* cloneGraph(Node* node) {
        
		if(node == NULL)
		    return NULL;
		
		if(umap.find(node->val)!=umap.end())
		    return umap[node->val];
		
		Node* NewNode = new Node(node->val);
		umap[node->val] = NewNode;
		for(auto i : node->neighbors){
		    NewNode->neighbors.push_back(cloneGraph(i));
		}
		
		return NewNode;
        
}
void tail(Node*& copy, Node* orig){
        if(orig == NULL){
            copy = NULL;
            return;
        }
        if(umap.find(orig->val)!= umap.end()){
            copy = umap[orig->val];
            return;
        }
        
        copy = new Node(orig->val);
        umap[orig->val]=copy;
        for(auto i: orig->neighbors){
            (copy)->neighbors.push_back(new Node());
            tail((copy)->neighbors.back(), i);
            
        }
    }
Node* cloneGraph(Node* node) {
        Node* copy;
        tail(copy, node);
        return copy;
}
