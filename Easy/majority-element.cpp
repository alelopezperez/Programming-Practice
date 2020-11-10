//https://leetcode.com/problems/majority-element/
//Time Complexity O(N)
//Space Complexity O(1)

//Time Complexity O(N)
//Space Complexity O(N)

//Time Complexity O(N*log(n))
//Space Complexity O(1)

int voting(vector<int>& nums){
        int count = 0;
        int candidate = 0;
        
        for(auto elem : nums){
            if(count == 0)
                candidate = elem;
            
            if(candidate == elem)
                count ++;
            else
                count --;
        }
        return candidate;
}
    
int sort(vector<int>& nums){
        sort(nums);
        
        int pos = (nums.size()/2);
        return nums[pos];
        
}
    
int maping(vector<int>& nums){
        unordered_map<int,int>umap;
        for(auto num : nums){
            umap[num]++;
            
            if(umap[num]>=(nums.size()/2)+1)
                return num;
        }
        return -1;
        
}
    
int majorityElement(vector<int>& nums) {
        return voting(nums);
}
