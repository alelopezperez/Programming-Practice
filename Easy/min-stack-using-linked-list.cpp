//https://leetcode.com/problems/min-stack/
// I can use extra stack it does not matter; but also i need to stop looking at the looking quickly at the correct answers and believe in myself;
//Time Complexity O(1);
//Space Comlexity O(2*N) Since I use a the main linked list and another one for min; but using a linked list is more eficients
//Time to completion 25min
class MinStack {
public:
    /** initialize your data structure here. */
    ListNode* head=NULL;
    ListNode* min=NULL;
    
    MinStack() {
        
    }
    
    void push(int x) {
       
        ListNode* aux = new ListNode(x);
        aux->next=head;
        head=aux;
        if(min==NULL || x <= min->val){
            ListNode* aux2 = new ListNode(x);
            aux2->next = min;
            min=aux2;
            
            cout<<min->val<<endl;
        }
    }
    
    void pop() {
        
        ListNode* aux = head;
        head=head->next;
        if(aux->val==min->val){
            ListNode* aux2 = min;
            min=min->next;
            delete(aux2);
        }
        delete(aux);
        
        
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return min->val;
    }
};

