//https://leetcode.com/problems/add-two-numbers/
//Time Complexity O(N) wherene N is the largest number
//Space Complexiy O(N) for the size of the new linked list answer

//In one while and always paying attetion to the carry (res in this case)
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* newHead = new ListNode(-1);
        ListNode* aux = newHead;
        int res = 0;
        while(l1!=NULL || l2!=NULL || res > 0){
            int val=0;
            
            if(l1!=NULL){
                val+= l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                val+=l2->val;
                l2=l2->next;
            }
            
            val +=res;
            
            res = val/10;
            val = val%10;
            aux->next = new ListNode(val);
            aux= aux->next;
            
        }
	return newHead->next;
        
}
