void reverse(ListNode** head){
        ListNode* prev=NULL;
        ListNode* curr=*head;
        ListNode* next;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
           
            
           
        }
        *head = prev;
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
	ListNode* head = new ListNode(0);
        ListNode* h = head;
        reverse(&l1);
        reverse(&l2);
        int sum=0;
        while(l1!=NULL || l2!=NULL || sum!=0){          
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            head->next = new ListNode(sum%10);
            sum = sum /10;            
            head = head->next;
            
        }
        
        h=h->next;
        reverse(&h);
       
       
        return h;
        
}
