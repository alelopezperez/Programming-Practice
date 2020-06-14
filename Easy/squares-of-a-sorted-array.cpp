//https://leetcode.com/problems/squares-of-a-sorted-array/
// Time Complexity O(N) of Merge Sort
// Space Complexity O(N)
vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        int i =  0;
        int r = A.size()-1;
        int mid = 0;
        
        
        while(mid<A.size() && A[mid]<0 )
            mid++;

        int left = mid -1;
        i = left;
        while(i>=0 && mid<=r){
            if( A[i]*A[i] < A[mid]*A[mid] ){
                ans.push_back(A[i]*A[i]);
                i--;
            }
            else{
                ans.push_back(A[mid]*A[mid]);
                mid++;
            }
        }
        
        while(mid<=r){
            ans.push_back(A[mid]*A[mid]);
            mid++;
        }
        
        while(i>=0){
            ans.push_back(A[i]*A[i]);
            i--;
        }
        
        return ans;   
}
