//https://leetcode.com/problems/palindrome-number/
//Time Complexity N = log10(NUMBER); O(N/2)
//Space COmplexit O(N)  I make a copy of the second half of the number
//REALLY EASY

bool isPalindrome(int x) {
     
        if(x == 0)
            return true;
        int size = log10(x)+1;
        
        if(size == 1)
            return true;
        
        int mid = size/2;
        int reversed = 0;
       
        for(int i = 0; i<mid; i++){
            reversed *= 10;
            reversed += x%10;
            x /= 10;
           
        }
        if(size%2!=0){
            x /= 10;
        }
     
        return (reversed == x)?true:false;
}
