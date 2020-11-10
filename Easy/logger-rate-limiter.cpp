//https://leetcode.com/problems/logger-rate-limiter/submissions/
//Time Complexity O(1) to lookup and decide if true or false per message
//Space Complexity O(N) size of the collective message

class Logger {
public:
    /** Initialize your data structure here. */
    unordered_map<string,int> umap;
    
    Logger() {
          
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        if(umap.find(message) == umap.end()){
            umap[message] = timestamp;
            return true;
        }
        
        if((timestamp - umap[message])>=10){
            umap[message] = timestamp;
            return true;
        }
        
        return false;
    }
};
