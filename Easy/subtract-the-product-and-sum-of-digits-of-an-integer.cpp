//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/
//Time Complexity O(log10(n))
//Space Complexity O(1)

int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;
        for(n; n>0; n/=10) {
           
            product *= n%10;;
            sum += n%10;;
          
        }
        
        return product - sum;
        
}
