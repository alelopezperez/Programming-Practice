//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
//Time Complexity O(n) I traverse the complete tree
//Space Complexity O(n) recursion stack
//I learned that the return funciton is important when using recursion; i was not implementing correctly until i had to make sure of using something
//else with the solution submissions
int maxDepth(Node* root) {
        int maxn=0;
        if(root==NULL)
            return maxn;
        maxn++;
        for(auto N : root->children){
             maxn = max(maxn, maxDepth(N)+1);
        }
        return maxn;
}
