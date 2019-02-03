//https://leetcode.com/problems/min-stack/
// I can use extra stack it does not matter; but also i need to stop looking at the looking quickly at the correct answers and believe in myself;
//Time Complexity O(1);
//Space Comlexity O(N) Since I use a only ONE!! double linked list(a modified version that points next,min instead of prev,next
//Time to completion 20min
class DNode {
public:
    int val;
    DNode* min;
    DNode* next;
    DNode() {}

    DNode(int _val) {
        val = _val;
        min = NULL;
        next = NULL;
    }
};
class MinStack {
public:
    /** initialize your data structure here. */
    DNode* head=NULL;
    DNode* min=NULL;
    MinStack() {
        
    }
    
    void push(int x) {
       
        DNode* aux = new DNode(x);
        aux->next=head;
        head=aux;
        
        if(min==NULL || head->val<=min->val){
            head->min=min;
            min=head;            
        }
       
    }
    
    void pop() {
        
        DNode* aux = head;
        head=head->next;
        if(min==aux){
            min=min->min;
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


