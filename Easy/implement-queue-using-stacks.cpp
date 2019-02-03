//https://leetcode.com/problems/implement-queue-using-stacks/submissions/
// Time Complexity O(2N); Is linear since i need push and pop the content of my main stack to my aux stack; and vice versa
// Space Complexity O(2N); since i use two stack to create the queue main stack and my aux stack. 
//Time to completion 8min
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> main;
    stack<int> aux;
    MyQueue() {
                
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(main.empty()){
            main.push(x);
        }
        else{
            while(!main.empty()){
                aux.push(main.top());
                main.pop();
            }
            main.push(x);
            while(!aux.empty()){
                main.push(aux.top());
                aux.pop();
            }
        }
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int aux = main.top();main.pop();
        return aux;
    }
    
    /** Get the front element. */
    int peek() {
        return main.top();
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return main.empty();
    }
};
