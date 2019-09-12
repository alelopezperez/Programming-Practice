//https://leetcode.com/problems/reorder-list/
//Time Complexity O(4N) I had to go through the list a lot of times
// SPace Complexity O(N) I made Copies    
//There is a better way
void reverse(ListNode** head){
        ListNode* prev = NULL;
        ListNode* curr = *head;
        ListNode* next;
        
        while(curr!=NULL){
            next= curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }

        *head = prev;
}

int count(ListNode* head){
        int c = 0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
}

void reorderList(ListNode* head) {
        if(head == NULL)
            return;
        
        ListNode* auxCP =  head;
        ListNode* auxst = new ListNode(auxCP->val);
        auxCP = auxCP->next;
        
        ListNode* st = auxst;
        while(auxCP!=NULL){
            auxst->next = new ListNode(auxCP->val);
            auxst = auxst->next;
            auxCP = auxCP->next;
        }
        
        reverse(&st);
        bool ch = true;
        ListNode* aux;
        int size = count(head);
    
        while(head != NULL && st !=NULL && size>1){
            size--;
            if(ch){
                aux = head->next;
                head->next = st;
                st = st->next;
                head=head->next;
                ch = false;
            }
            
            else{
                head->next = aux;
                head = head->next;
                ch=true;
                
            }
        }
        head->next = NULL;

        
}
