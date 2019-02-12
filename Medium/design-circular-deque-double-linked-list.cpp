// Time complexity O(N)
//Space COmplexity O(N)
// Time to completion 40min
class Dnode {
public:
    int val;
    Dnode* next;
    Dnode* prev;
    
    Dnode() {
        val = -1;
        prev = NULL;
        next = NULL;
    }
    
     Dnode(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
    }
};
class MyCircularDeque {
public:
    int places;
    int curr=0;
    Dnode* first=NULL;
    Dnode* last;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        places = k;
        
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(curr == places)
            return false;
        curr++;
        if(first ==  NULL){
            first = new Dnode(value);
            last = first;
        }
        else{
            Dnode* aux = new Dnode(value);
            first->prev = aux;
            aux->next=first;
            first = aux;
        }
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(curr == places)
            return false;
        curr++;
        if(first ==  NULL){
            first = new Dnode(value);
            last = first;
        }
        else{
            Dnode* aux = new Dnode(value);
            aux->prev = last;
            last->next = aux;
            last = aux;
        }
        return true;
        
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(curr == 0)
            return false;
        if(curr == 1){
            first = NULL;
            last = NULL;
        }
        
        else{
            first = first->next;
            first->prev==NULL;
        }
        curr--;
        return true;
        
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(curr==0)
            return false;
        if(curr == 1){
            first = NULL;
            last = NULL;
        }
        else{
            last = last->prev;
            last->next=NULL;
            
        }
        curr--;
        return true;
        
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty())
            return -1;
        return first->val;
        
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty())
            return -1;
        return last->val;
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return (curr==0)?true:false;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
         return (curr==places)?true:false;
    }
};

