//https://leetcode.com/problems/duplicate-zeros/submissions/
//Time Complexity O(N)
//Space Complexity O(1) in place need to practice

void duplicateZeros(vector<int>& arr) {
        int count = 0;
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i]==0){
                    count++;
            }
        }
     
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i]==0){
                if(i+count<arr.size()){
                    arr[i+count]=0;
                }
                count--;
                if(i+count<arr.size()){
                    arr[i+count]=0;
                }
            }
            else if(i+count<arr.size())
                arr[i+count]=arr[i];
        }
        
       
}
