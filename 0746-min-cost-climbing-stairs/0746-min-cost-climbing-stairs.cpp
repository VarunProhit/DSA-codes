class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n = cost.size();
        int prev = 0, sec_prev = 0; 
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = prev + cost[i - 1];  
            int jumpTwoStep = sec_prev + cost[i - 2]; 
            sec_prev = prev;
            prev = min(jumpOneStep, jumpTwoStep);
            
        }
        return prev;  
    }
};