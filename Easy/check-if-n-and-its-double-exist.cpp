//https://leetcode.com/problems/check-if-n-and-its-double-exist/submissions/
//Time Complexity O(N) ONE PASS 
//Space Complexity O(N)
bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        
        for(auto& num : arr){
            if(uset.find(num*2) != uset.end() || (uset.find(num/2) != uset.end() && num%2==0) )
                return true;
            
            uset.insert(num);
        }
        
        return false;
}
