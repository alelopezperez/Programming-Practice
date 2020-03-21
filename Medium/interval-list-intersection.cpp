//https://leetcode.com/problems/interval-list-intersections/
//Time Complexity O(N+M) 
//Space Complexity O(1)
// Check the ranges the one with the longest range move one
// Check the interval as I did.
//Time To Completion Learning Experience BF


vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        
        int i = 0;
        int j = 0;
        vector<vector<int>> ans;
        while(i<A.size() && j<B.size()){
            
            int lo = max(A[i].front(), B[j].front());
            int hi = min(A[i].back(), B[j].back());
            
            if(lo<=hi){
                vector<int> aux;
                ans.push_back({lo,hi});
            }
            
            if(A[i].back() > B[j].back())
                j++;
            else
                i++;
        }
        
        return ans;
      
}
