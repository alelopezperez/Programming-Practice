//https://leetcode.com/problems/add-digits/
//Time Complexity O(1)
//Space Complexity O(1)

int addDigits(int num) {
        
        if(num<=9)
            return num;
        int ans = num % 9;
            
        return ans == 0 ? 9 : ans;
            
        
}
