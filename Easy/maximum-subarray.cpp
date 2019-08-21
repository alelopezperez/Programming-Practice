//https://leetcode.com/problems/maximum-subarray/
//Time Complexity O(N*Log(N)) log(n) for divifing and N because we try to find the cross sum value.
//Space Complexity O(log(N))
//Notes: the mergin part of divide and conques is the cross max that is linear.
//Time To completion 1hr

int divide_conquer(vector<int>& nums, int low, int high){
        int left;
        int right;
        if(low==high){
            return nums[low];     
        }
        int val;
        int mid = (high+low)/2;
        left = divide_conquer(nums, low, mid);
        right = divide_conquer(nums, mid+1, high);
        val = cross(nums, low, high);
        
        return max(max(left,right),val);
        
}
    
int cross(vector<int>& nums, int low, int high){
        int mid = (low+high)/2;
        int sum = 0;
        int left = INT_MIN;
        int right = INT_MIN;
        for(int i = mid; i>=low; i--){
          
            sum += nums[i];
            left=max(left, sum);
        }

        sum=0;
        for(int i = mid+1; i<=high; i++){
            sum += nums[i];
            right=max(right, sum);
        }
        return left+right;
        
}
int maxSubArray(vector<int>& nums) {
        return divide_conquer(nums, 0, nums.size()-1);
}
