//https://leetcode.com/problems/power-of-four/submissions/

//Time Complexity O(log4(N)) dividing by 4
//Space Complexity O(1)
//Did not use bit manipulation
bool isPowerOfFour(int n) {
        if(n == 0)
            return false;
        while(n%4 == 0){
            n /= 4;
            
        }
        return n == 1;
    }
