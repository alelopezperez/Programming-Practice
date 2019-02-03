// I can use extra stack it does not matter; but also i need to stop looking at the looking quickly at the correct answers and believe in myself;
//Time Complexity O(N);
//Space Comlexity O(2*N) Since I use a main stack and one aux stack.
//Time to completion 18min
// THIS USES DOUBLE THE REQUIERED MEMORY ILL MAKE A BETTER IMPLEMENTATIO.
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        if(min.empty() || min.top()>=x){
            min.push(x);
           
        }
        
    }
    
    void pop() {
        if(st.top()==min.top()){
            min.pop();
        }
        st.pop();      
        
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
       
        return min.top();
    }
};
