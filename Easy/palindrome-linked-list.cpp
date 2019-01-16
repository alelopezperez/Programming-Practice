int count(ListNode* head){
	int sum = 0;
        if(head == NULL){
            return sum;
        }

        while(head != NULL){
            sum++;
            head = head->next;
        }
        
        return sum;
}

bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }

        if(head->next==NULL){
            return true;
        }

        ListNode* aux = head;
        stack<int> fh;
        int total = count(head);
        int mid = total/2;
        int i = 0;
        while(i!=mid){
            i++;
            fh.push(aux->val);
            aux=aux->next;            
        }
        if(total%2!=0){
            aux=aux->next;
        }
        cout<<aux->val;
        while(!fh.empty()){
            if(fh.top() != aux->val){
                return false;                
            }
            aux= aux->next;
            fh.pop();
        }
        return true;
}

void reverselinkedlist(ListNode** head){
        ListNode* prev = NULL;
        ListNode* aux = *head;        
        ListNode* next;
        
        while(aux!=NULL){
            next = aux->next;
            aux->next = prev;
            prev = aux;            
            aux = next;
        }
        
        *head = prev;
        
}

bool isPalindrome_reverse(ListNode* head) {
      
        ListNode* slow = head;
        ListNode* fast = head;
        
        if(head==NULL){
            return true;
        }
        if(head->next==NULL){
            return true;
        }
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        if(fast != NULL){
            slow=slow->next;            
        }
        cout<<slow->val;
        cout<<"\n";
        
        reverselinkedlist(&slow);
        
        while(slow!=NULL){
            if(head->val != slow->val){
                return false;
            }
            
            head = head->next;
            slow = slow->next;
        }
       
      
        return true;
      
}
int main(){
}


