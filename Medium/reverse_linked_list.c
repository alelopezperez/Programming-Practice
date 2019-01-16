/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {   
    
    if(head==NULL) return NULL;
    
    struct ListNode *ultimo = malloc(sizeof(struct ListNode)); 
    
    ultimo->val=head->val;
    ultimo->next=NULL;
    
   
    head = head->next;
    while(head!=NULL){
        struct ListNode *aux = malloc(sizeof(struct ListNode));
        aux->val = head->val;
        aux->next = ultimo;
        ultimo = aux;
        head=head->next;
        
    }
    
    return ultimo;
    
}
