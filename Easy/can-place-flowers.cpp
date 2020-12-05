//https://leetcode.com/problems/can-place-flowers/submissions/
//Time Complexity O(N) One pass
//Space Complexity O(1)
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0)
                return n==n;
            else
                return 0==n;
        }
        for(int i = 0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                
                if(i == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    count++;
                }
                
                else if(i==flowerbed.size()-1 && flowerbed[i-1] == 0){
                    flowerbed[i] =1;
                    count++;
                }
                else if(i-1>0 && i+1<flowerbed.size() && flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
                    flowerbed[i] =1;
                    count++;
                }
                
                if(count>=n)
                    return true;
            }
        }
        
        return false;
        
}
