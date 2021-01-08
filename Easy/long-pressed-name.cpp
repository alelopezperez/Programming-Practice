//https://leetcode.com/problems/long-pressed-name/
//Time Complexity O(N+M)
//Space Complexity O(1)

bool isLongPressedName(string name, string typed) {
       
        if(typed.size()< name.size())
            return false;
        
        
        int left = 0;
        int right = 0;
        
        while(right<typed.size() && left<name.size()){
            if(typed[right]==name[left]){
                right++;
                left++;
                
            }
            
            else if(right >=1 && typed[right] == typed[right - 1]){
                right++;
            }
            else{
                
                return false;
            }

        }
      
        if(left != name.size())
            return false;
        else{
            while(right<typed.size()){
                if(typed[right]!=typed[right-1])
                    return false;
                right++;
            }
        }
        
        
        
        return true;
        
}
