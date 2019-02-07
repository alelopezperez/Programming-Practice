//https://leetcode.com/problems/online-stock-span/submissions/
//Time Complexity O(N) size of Next request
//Space Complexity O(N) i use one stack
//Time to completion 85min 
//I use the guided solution; i learned to use more complext struct for my stacks and that usually a stack problem doesnt require to maintain my all the previous 
//pushes after pops I made;
class StockSpanner {
public:
    stack<pair<int,int>> main;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int i = 1;
        
        while(!main.empty() && main.top().first<=price){
            i+=main.top().second;
            main.pop();
        }
        main.push(make_pair(price,i));
        return i;
    }
};
