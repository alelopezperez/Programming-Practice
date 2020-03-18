//https://leetcode.com/problems/first-bad-version/
//Time Complexity O(log(N)) need to learn when to get the leftmost and rightmos
//Space COMplecity O(1) only constan variable sizes
//Time to complete 30min
// I need to start drawing more with trees

int firstBadVersion(int n) {
        if(n==1)
            return n;
        int left = 1;
        int right = n;
       
        while(left<=right){
            int mid = left+(right-left)/2;    
            if( mid<n && !isBadVersion(mid) && isBadVersion(mid+1) ){
                return mid+1;
            }
            if( mid>=1 && isBadVersion(mid) && !isBadVersion(mid-1) ){
                return mid;
            }
            else if(isBadVersion(mid))
                right = mid-1;
            else
                left = mid+1;
        }
        
        return -1;
        
}
