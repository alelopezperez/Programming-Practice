//https://leetcode.com/problems/merge-sorted-array/
//Time Complexity O(N+M)
//Space Complexity O(1)
//Time To completion 45min
//This was just looking at bothe arrays from right to left; put the values; and handle some edge cases
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size()-nums2.size()-1;
        int j = nums2.size()-1;
        int pos = nums1.size()-1;
        while( (i >= 0 || j >=0)){
            cout<<j<<endl;
            if(i>=0 && j>=0 && nums1[i]>nums2[j]){
              
                int prev = nums1[i];
                nums1[pos] = nums1[i];
                nums1[i] = 0;
                i--;
                pos--;
            }
            else if(j>=0){
               
                nums1[pos]=nums2[j];
                j--;
                pos--;
            }
            else{
                i--;
                j--;
            }
        }
        
}
