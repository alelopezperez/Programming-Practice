//Time Complexity O(n/2)
//Space O(1)
//Time To completion 0min hahah
///EAZYYY

void swap (uint32_t& x, int i, int j){
        if(((x>>i)&1) != ((x>>j)&1)){
		    x^=(1<<i);
		    x^=(1<<j);	
        }
}
uint32_t reverseBits(uint32_t n) {
        int i = 0;
        int j = 31;
        
        while(i<j){
            
            swap(n,i,j);
            i++;
            j--;
        }
        
        return n;
}
