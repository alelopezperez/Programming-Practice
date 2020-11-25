//https://www.youtube.com/watch?v=28Fj7d8GBek
//TIme Complexity O(K) number of prime factors
//Space Compleixty O(N) the recursion stack

bool isUgly(int num) {
        if(num<=0)
            return false;
        if(num==1)
            return true;
        
        bool five=false;
        bool three = false;
        bool two = false;
        
        if(num%5==0)
           five = isUgly(num/5);
        
        if(num%3==0 && num%5!=0)
           three =  isUgly(num/3);
        
        if(num%2==0 && num%3!=0)
            two = isUgly(num/2);
        
        return five || three || two;
        
}
