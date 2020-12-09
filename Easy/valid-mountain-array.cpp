//https://leetcode.com/problems/valid-mountain-array/
//Time Complexity O(n)
//Space Complexity O(1)

bool validMountainArray(vector<int>& arr) {
        bool up=false;
        bool down = false;
        
        if(arr.size()<3)
            return false;
        for(int i = 0; i<arr.size()-1; i++){
            
            if(arr[i] == arr[i+1])
                return false;
            
            if(arr[i] < arr[i+1]){
                if(!down)
                    up = true;
                else 
                    return false;
            }
        
            else{
                if(up)
                    down = true;
                else 
                    return false;
            }   
        }
        
        return up&&down;
}
