

bool isHappy(int n) {
        unordered_set<int> uset;
        int num;
        int temp = n;
        while(num!=1){
            num = 0;
            while(temp!=0){
                num+= ((temp%10)*(temp%10));
                temp = temp/10;
            }
            
            if(uset.find(num)!=uset.end())
                return false;
            
            uset.insert(num);
            temp = num;          
           
        }
        
        return true;
}
