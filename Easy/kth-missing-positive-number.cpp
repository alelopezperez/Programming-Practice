//https://leetcode.com/problems/kth-missing-positive-number/solution/
//Time Complexity O(N)
//Space Coomplexity O(1)

int findKthPositive(vector<int>& arr, int k) {
        
        int nk = k-(arr.front()-1);
        
        if(nk<=0)
            return k;
      
        for(int i = 0; i<arr.size()-1; i++){
            cout<<arr[i]<<" "<<nk<<endl;
            
            if(nk <= arr[i+1]-arr[i]-1)
                return arr[i]+nk;
            
            else{
              
                nk -= (arr[i+1]-arr[i])-1;
            }
        }
       
        return arr.back()+nk;
}


int findKthPositive(vector<int>& arr, int k) {

        
        int i = 0;
        int count = 0;
        int nums = 1;
        while(count!=k){
            if(arr[i]!=nums){
               
                count++;
                nums++;
            }
            else{
                if(i+1<arr.size())
                    i++;
                nums++;
            }
            
          
        }
        
        return nums-1;
}


