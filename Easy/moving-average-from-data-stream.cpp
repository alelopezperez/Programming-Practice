//https://leetcode.com/problems/moving-average-from-data-stream
//Time Complexity O(1)
//Space Complexity O(k)

class MovingAverage {
public:
    /** Initialize your data structure here. */
    int size;
    queue<int> q;
    int curr;
    int total;
    MovingAverage(int size) {
        this->size = size;
        this->curr = 0;
        this->total = 0;
        
    }
    
    double next(int val) {
        q.push(val);
        this->total += val;
        curr++;
        
        while(q.size() > this->size){
            total-=q.front();
            q.pop();
            curr--;
        }
        
        return (double)total/curr;
        
        
    }
};


