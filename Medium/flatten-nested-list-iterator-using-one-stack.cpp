//Time Complexity O(n)
//Space Complexity O(n)
//Time To Completion 120mins
class NestedIterator {
public:
    stack<NestedInteger> iterator;
    NestedIterator(vector<NestedInteger> &nestedList) {
        
        int size = nestedList.size()-1;
        for(int i = size; i>=0; i--){
            iterator.push(nestedList[i]);
        }
        
    }

    int next() {
        
        int aux =  iterator.top().getInteger(); 
        iterator.pop();
        return aux;
    }

    bool hasNext() {
        while(!iterator.empty()){
            if(iterator.top().isInteger())
                return true;
            
            else{
                vector<NestedInteger> temp = iterator.top().getList();
                iterator.pop();
                int size =temp.size()-1;
                for(int i = size; i >= 0 ; i--){
                    iterator.push(temp[i]);
                }
            }
        } 
        return false;
    }
};
