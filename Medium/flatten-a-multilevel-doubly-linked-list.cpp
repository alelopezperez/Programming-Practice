//https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/submissions/
//Time Complexity O(n) without counting the recursion stack; I just iterate through the linked list once
//Space Complexity O(1) without counting the recursion stack; I use fixed number of extra pointers
class Node {
public:
	int val;
    	Node* prev;
   	Node* next;
    	Node* child;

    	Node() {}

    	Node(int _val, Node* _prev, Node* _next, Node* _child) {
        	val = _val;
        	prev = _prev;
        	next = _next;
        	child = _child;
    	}
};
void flatrec(Node* prev, Node* head, Node* next){
        head->prev=prev;
	while(head->next!=NULL){
        	if(head->child!=NULL){
                	flat(head->child);
            	}
        	head=head->next;
        }
        
        head->next=prev->next;
        if(next!=NULL)
		next->prev=head;
}
void flat(Node* head){
        while(head!=NULL){
            Node* p=NULL;
            if(head->child!=NULL){
                
                flatrec(head, head->child, head->next);
                head->next = head->child;
                head->child=NULL;
                
            }
         
            head=head->next;
        }
}
Node* flatten(Node* head) {
        
        flat(head);
        return head;
}


