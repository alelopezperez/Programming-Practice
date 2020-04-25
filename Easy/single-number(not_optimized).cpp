//https://leetcode.com/problems/single-number/submissions/
//Time Complexity O(n) since we traverse the array once
//Space COmplexity O(n) since the use of the unordered list
//Time to completion 10min
int singleNumber(vector<int>& nums) {
        unordered_set<int> uset;
        
        for(auto i : nums){
            if(uset.find(i)==uset.end())
                uset.insert(i);
            else
                uset.erase(i);
        }
        
        return *(uset.begin());
}
