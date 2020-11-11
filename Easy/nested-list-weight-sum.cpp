//https://leetcode.com/problems/nested-list-weight-sum/submissions/
//Time Complexity O(N) ~
//Space Complexity O(D) stack of the depth
void helper(vector<NestedInteger>& nestedList, int& sum, int level = 1){
        for(auto elem : nestedList){
            if(elem.isInteger())
                sum+=level*elem.getInteger();
            else
                helper(elem.getList(),sum,level+1);
        }
}
    
int helper2(vector<NestedInteger>& nestedList, int level = 1){
        int sum = 0;
        
        for(auto elem : nestedList){
            if(elem.isInteger())
                sum+=level*elem.getInteger();
            else
                sum+=helper2(elem.getList(),level+1);
        }
        return sum;
}

int depthSum(vector<NestedInteger>& nestedList) {
        //int sum = 0;
        //helper(nestedList, sum);
        return helper2(nestedList);
}
