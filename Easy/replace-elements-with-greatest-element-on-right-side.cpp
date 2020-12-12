//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/
//Time Complexity O(N)
//Space Complexit O(1)
vector<int> replaceElements(vector<int>& arr) {
        
       
        int maxi = -1;
        int temp;
        for(int i = arr.size()-1; i>=0; i--){
            temp = arr[i];
            arr[i] = maxi;
                maxi = max(temp,maxi);
        }
        
        return arr;
}

//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/
//Time Complexity O((N^2+N)/2)
//Space Complexit O(1)
vector<int> replaceElements(vector<int>& arr) {
        
        for(int i = 0; i<arr.size()-1; i++){
            int max = 0;
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j] > max)
                    max = arr[j];
            }
            arr[i] = max;
        }
        
        arr.back() = -1;
        
        return arr;
}
