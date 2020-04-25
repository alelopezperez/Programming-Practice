//https://leetcode.com/problems/plus-one/
//Time complexity O(n) 
//Space COmplexity O(1)
//time to completion 10min

vector<int> plusOne(vector<int>& digits) {
        
        int carry = 0;
        int j = digits.size()-1;
        
        digits[j]= carry + 1 + digits[j];
        carry = digits[j]/10;
        digits[j] = digits[j]%10;
        
        while(carry !=0){
            j--;
            if(j<0){
                digits.insert(digits.begin(), carry);
                break;
            }
                
            
            digits[j]= carry + digits[j];
            carry = digits[j]/10;
            digits[j] = digits[j]%10;
        }
        
        return digits;
        
}
