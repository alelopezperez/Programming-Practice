// https://leetcode.com/problems/swap-nodes-in-pairs/submissions/
// O(n) time complexity I only traverse the Linked List once
// O(1) space complexity I only use 3 extra varibles making it a constant space complexity

ListNode* swapPairs(ListNode* head) {
        
	if(head==NULL||head->next==NULL)
        	return head;
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* prev = dummy;
        ListNode* curr = dummy->next;
        ListNode* next = curr->next;
        
       	while(1){
		prev->next = next;
            	curr->next = next->next;
            	next->next = curr;
            
            	prev = curr;
            		if(prev->next==NULL||prev->next->next==NULL)
                		break;
            	curr = prev->next;
		next = curr->next;
           
        }
 
        return dummy->next;
}
