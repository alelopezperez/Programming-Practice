//https://leetcode.com/problems/count-primes/submissions/
//Time Complexity O(N*log(n))
//Space COmpelxity O(N)
int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<int> sieves (n+1,0);
        int ans=0;
        for(int i = 2; i<=n; i++){
            int pos = i*2;
            int mult = 2;
            while(pos<=n){
                
                sieves[pos]=1;
                mult++;
                pos=i*mult;
            }
        }
        
        for(int i = 2; i<sieves.size()-1; i++){
            
            if(sieves[i]==0)
                ans++;
        }
        
        return ans;
        
}
