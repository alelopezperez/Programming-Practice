//https://leetcode.com/problems/reverse-linked-list-ii
// O(n) time complexity i just iterate through the array once
// O(1) i use a constant amount of pointers
void reverse(ListNode** head, int mov){
        ListNode* prev = NULL;
        ListNode* curr = *head;
        ListNode* next;
        ListNode* aux;
       
        for(int i = 0; i<=mov; i++){
            aux=curr->next;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
      
        (*head)->next =aux;
        *head = prev;     
}

ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head->next==NULL){
            return head;
        }
        
        ListNode* nh = head;
        ListNode* prev=nh;
        for(int i=1; i<m; i++){
            prev=nh;
            nh = nh->next;
        }
        reverse(&nh, n-m);
        if(m==1){
            return nh;
        }
        
        prev->next=nh;
        return head;
}
