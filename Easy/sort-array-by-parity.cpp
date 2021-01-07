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

vector<int> sortArrayByParity(vector<int>& A) {
        
        int even = 0;
        
        for(int i = 0; i<A.size(); i++){
            if(A[i]%2==0){
                swap(A[i],A[even++]);
            }
        }
        
        return A;
        
}
