//https://leetcode.com/problems/sort-array-by-parity/solution/
//Time Complexity O(N)
//Space Complexity O(1)

vector<int> sortArrayByParity(vector<int>& A) {
        
        int left = 0;
        int right = 0;
        
        while(right < A.size()){
            if(A[right]%2 == 0){
                swap(A[left++],A[right++]);
            }
            else
                right++;
        }
        
        return A;
        
}
