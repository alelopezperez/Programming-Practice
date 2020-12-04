//https://leetcode.com/problems/perfect-number/submissions/
// Time Complexity O(N/2)
// Space Complexity O(1)

bool checkPerfectNumber(int num) {
        
        if(num == 1)
            return false;
        int ans = 0;
        for(int i = 1; i<num/2; i++){
            if(num % i == 0)
                ans += i;
        }
        
        return ans == num/2;
}
