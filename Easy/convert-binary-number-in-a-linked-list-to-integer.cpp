//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
//Time Complexity O(2N)
//Space Complexity O(1)
void reverse(ListNode** head){
        ListNode* curr = *head;
        ListNode* prev = NULL;
        ListNode* next;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        *head = prev;
}


int getDecimalValue(ListNode* head) {
        
        reverse(&head);
        int sum = 0;
        int count = 0;
        while(head != NULL){
            if(head->val == 1)
                sum += (int)pow(2,count);
            
            head= head->next;
            count++;
        }
        return sum;
        
}

//Time Complexity O(N)
//Space Complexity O(1)
int getDecimalValue(ListNode* head) {
        
       
        int sum = head->val;
        while(head->next != NULL){
            sum = sum*2 + head->next->val;
            head = head->next;
        }
        return sum;
        
}
