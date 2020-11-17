//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/
//Time Complexity O(N)
//Space Complexity O(1) if you do not consider the solution vector else it will O(N).

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> ans;
        for(auto& num : candies){
            if(num > max)
                max= num;
        }
        
        for(auto& num : candies){
            if(num+extraCandies >= max)
                ans.push_back(true);
            else
                ans.push_back(false);
                
        }
        
        return ans;
}
