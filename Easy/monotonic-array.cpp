//https://leetcode.com/problems/monotonic-array/submissions/
//Time COmplexity O(N)
//Space Complexity O(1)

bool isMonotonic(vector<int>& A) {
        if(A.size()<=1) return true;
        
        int flag = 0;
        
        for(int i = 0; i<A.size()-1; i++){
            if(A[i]==A[i+1])
                continue;
            else{
                if(flag == 0){
                    if(A[i]<A[i+1])
                        flag = -1;
                    if(A[i]>A[i+1])
                        flag = 1;
                }
                else{
                    if(flag == 1 && A [i]<A[i+1])
                        return false;
                    if(flag == -1 && A[i]>A[i+1])
                        return false;
                }
            }
        }
        
        return true;        
}

bool isMonotonic(vector<int>& A) {

        bool isinq = true;
        bool isdec = true;
        
        
        for(int i = 0; i<A.size()-1; i++){
            if(A[i]<A[i+1])
                isinq=false;
            if(A[i]>A[i+1])
                isdec=false;
        }
        
        return isinq || isdec;        
}
