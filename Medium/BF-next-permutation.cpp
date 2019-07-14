//https://leetcode.com/problems/next-permutation/
//Time Complexity O(N)
//Space COmplexitu O(1)
//Time TO Completion A LOT OF TIME




void nextPermutation(vector<int>& nums) {
        int k = nums.size()-2;
        while(k>=0 && nums[k]>=nums[k+1]){
            k--;
        }
        
        if(k==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int swap=-1;
        for(int i = nums.size()-1; i>k; i--){
            if(nums[i]>nums[k]){
                swap = i;
                break;
            }
        }
        cout<<swap;
        
        //swap
        int temp = nums[swap];
        nums[swap]= nums[k];
        nums[k] = temp;
        reverse(nums.begin()+1+k, nums.end());
}
