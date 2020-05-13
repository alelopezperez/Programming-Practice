//https://leetcode.com/problems/number-of-1-bits/submissions/
// EASY
// Time Complexity O(32) = O(1)
// Space Complexity O(1)
int hammingWeight(uint32_t n) {
        int count = 0;
        int mask = 1;
        while(n>0){
            if(n&1)
                count++;
            n>>=1;
            
        }
        return count;
}
