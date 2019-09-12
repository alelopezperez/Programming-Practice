//https://leetcode.com/problems/merge-two-sorted-lists/
//Time Complexity O(N) where N is the shortes list
//Space Complexity O(N) for the answer
// When one list is finished just anex the other to the end of the new list.
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l2) return l1;
        if (!l1) return l2;
        
        ListNode* start = new ListNode(0);
        ListNode* aux = start;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                aux->next = new ListNode(l1->val);
                l1=l1->next;
            }
            else{
                aux->next = new ListNode(l2->val);
                l2=l2->next;                
            }
            aux = aux->next;
        }
        if(l1!=NULL)
            aux->next = l1;             
        
        if(l2!=NULL)
            aux->next = l2;

        return start->next;
        
}
