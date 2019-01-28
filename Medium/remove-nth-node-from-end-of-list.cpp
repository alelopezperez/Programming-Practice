//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
// O(n) i only traverse the linked list once
// O(1) only use a fixes amount of extra space
// Used the solution as guidence
// Learned to always use a dummy when you need the prev; always use a dummy to get the previous
// In this specific example i needed to learn the I neede a Node one step behind the one that was going to be deleted;
struct ListNode {
	int val;
     	ListNode *next;
     	ListNode(int x) : val(x), next(NULL) {}
};


ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr = dummy;
        ListNode* next = dummy;
        
     
        for(int i=0; i<n; i++){
        	next = next->next;
        }
        
        while(next!=NULL){
            	prev=curr;
            	next=next->next;
            	curr=curr->next;

        }
        
    
        prev->next=prev->next->next;
        return dummy->next;
}
