//https://leetcode.com/problems/validate-stack-sequences/submissions/
//Time Complexity O(2N);
//Space Complexity O(N);
//Time To Completion 37min;
// I learned to use a stack when the question is about stacks (yeah i know) and also that this is a greedy algorithm that uses a stack.
// I glimmpse quickly throught the guide.

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> helper;
        int j = 0;
        for(int i = 0; i<pushed.size(); i++){
            helper.push(pushed[i]);
            while(!helper.empty() && helper.top()==popped[j]){
                j++;
                helper.pop();
            }
            
        }
        
        return helper.empty();
}
