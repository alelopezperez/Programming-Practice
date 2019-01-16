int count(ListNode* head){
        int i = 0;
        while(head!=NULL){
            i++;
            head=head->next;
        }
        return i;
}
    
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        
        int a = count(headA);
        int b = count(headB);
        int diff = abs(a-b);
        
        if(a > b){
              for(int i = 0; i<diff; i++){
                  headA=headA->next;
              }
        }
        
        else{
              for(int i = 0; i<diff; i++){
                  headB=headB->next;
              }
        }
        
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
}
