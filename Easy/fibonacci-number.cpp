//https://leetcode.com/problems/fibonacci-number/solution/
//Time Complexity O(2^N) Normal Recursion
//Time Complexity O(N) DP Memoization
//Space Complexity O(N)


int fib(int N) {
        if(N == 0)
            return 0;
        if(N == 1)
            return 1;
        
        return fib(N-1)+fib(N-2);
        
}

int fib(int N) {
        int ans = 0;
        
        unordered_map<int, int> memo;
        memo[0]=0;
        memo[1]=1;
        
        return fibo(N, memo);
    }
    
    int fibo(int N, unordered_map<int,int>& memo){
        if(memo.find(N) != memo.end())
            return memo[N];
        
        memo[N] = fibo(N-1,memo) + fibo(N-2,memo);
        
        return memo[N];
}
