//https://leetcode.com/problems/richest-customer-wealth/submissions/
//Time Complexity O(N)
//Space Complexity O(1)
int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxi = 0;
        for(auto& p : accounts){
            int temp = 0;
            for(auto& c : p){
               temp += c;
            }
             if(temp > maxi)
                    maxi = temp;
        }
        return maxi;
}
