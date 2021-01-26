//https://leetcode.com/problems/valid-perfect-square/
// Time Complexity log(n)
// Space Comlexity O(1)

bool isPerfectSquare(int num) {
        if(num < 2)
            return true;
        long int left = 1;
        long int right = num/2;
        
        while(left <= right){
            long int mid = left + (right - left)/2;
            long int val = mid * mid;
            if(val == num)
                return true;
            else if(val > num)
                right = mid-1;
            else
                left = mid+1;
        }
        
        return false;
}
