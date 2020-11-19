//https://leetcode.com/problems/sqrtx/submissions/
//Time Complexity O(log(N))
//Space Complexity O(1)

int binarySearch(int start, int end, int key){
        int ans = 0;
        int mid;
        while(start<=end){
            int mid = (end+start) /2;
            long int val = (long)mid*mid;
            
          
            if(val == key){
                return mid;
            }
            
            else if (val > key)
                end = mid -1;
            
            else{
                ans = mid;
                start = mid +1;
            }
                
                
        }
        
        return ans;
}

int mySqrt(int x) {
        if(x<2)
            return x;
        int start = 0;        
        int end = x/2;
       
        return binarySearch(start, end, x);
}
