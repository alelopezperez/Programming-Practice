//https://leetcode.com/problems/implement-stack-using-queues/submissions/
// Time Complexity O(2N) Is linear since i need push and pop the content of my main queue to my aux queue and back vice-versa so i go throught the queue twice.
// Space Complexity O(2N) is linear since I use two queues.
// Completion Time 10min.
 
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> aux;
    queue<int> main;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(main.empty()){
            main.push(x);
        }
        else{
            while(!main.empty()){
                aux.push(main.front());
                main.pop();
            }
            main.push(x);
            while(!aux.empty()){
                main.push(aux.front());
                aux.pop();
                
            }
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int aux = main.front();
        main.pop();
        return aux;
        
    }
    
    /** Get the top element. */
    int top() {
        return main.front();

        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return main.empty();
    }
};
