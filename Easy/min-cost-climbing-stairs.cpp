//https://leetcode.com/problems/min-cost-climbing-stairs/
//O(2N) DP
//O(N) my memo
int DPmincost(vector<int>& cost, int i, vector<int>& memo ){
                
        if(i>=cost.size())
            return 0;
        
        if(memo[i]!= -1)
            return memo[i];
        
        memo[i] = cost[i] + min( DPmincost(cost,i+1,memo), DPmincost(cost,i+2,memo) );
        
        return memo[i];
        
}

int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> memo(cost.size()+1, -1);
        
        return min(DPmincost(cost, 1, memo), DPmincost(cost, 0, memo));
}
