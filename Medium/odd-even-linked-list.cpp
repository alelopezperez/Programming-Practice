ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        
       	//
        ListNode* p1=head;
        ListNode* p1a=head;
        
        ListNode* p2=p1->next;
        ListNode* p2a=p1->next;
        
	        
        while(p1!=NULL && p2!=NULL){           
		            
		//make the groups of odd the odd will always be next of the even so use the even->next		
            if(p2!=NULL){
                p1a=p1;
                p1->next = p2->next;
                p1=p2->next;
            }
            	//the same as before but vice verse
            if(p1!=NULL){
                p2->next=p1->next;
                p2=p1->next;
               
            }
            
             
        }
        
	//depending on the amount of node in the linked list p1 will be null of p2
	//so thats why i always have the prev of p1 as p1a;
	//and the beigning of p2 as p2a
        if(p1!=NULL){
            p1->next=p2a;
        }
        
        if(p2!=NULL){
            p1a->next=p2a;
        }
         
        return head;
}
