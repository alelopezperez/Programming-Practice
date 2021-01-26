//https://leetcode.com/problems/xor-operation-in-an-array/
// Time Complexity O(N)
// Space Compexity O(1)

int xorOperation(int n, int start) {
        int num = 0;
        for(int i = 0; i<n; i++){
            num ^= start + 2*i;
        }   
        return num;
}
