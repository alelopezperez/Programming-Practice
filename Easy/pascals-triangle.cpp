//https://leetcode.com/problems/pascals-triangle/
//Time Complexity O(N^2+N)/2
//Space Complexity O(N^2)


vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int pascal = 1;
        while(pascal <= numRows){
            if(pascal == 1){
                ans.push_back({1});
            }
            
            else if (pascal == 2){
                ans.push_back({1,1});
            }
            else{
                vector<int> temp(pascal, 1);
                for(int i = 1; i<temp.size()-1; i++){
                    temp[i]=ans[pascal-2][i]+ans[pascal-2][i-1];
                } 
                ans.push_back(temp);
            }
            pascal++;
        }
        return ans;
}
