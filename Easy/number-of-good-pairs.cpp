//https://leetcode.com/problems/number-of-good-pairs/submissions/
//Time Complexity O(N)
//Space Complexity O(N)

int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> uset;
        int count = 0;
        for(auto& num : nums){
            if(uset.find(num)==uset.end())
                uset[num]=1;
            else{
                count+=uset[num];
                uset[num]++;
            }
        }
        return count;
}
