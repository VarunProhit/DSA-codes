class Solution
{
    public:
        int mincostTickets(vector<int> &days, vector<int> &costs)
        {
            int dp[366], i;
            dp[0] = 0;
            dp[1] = costs[0];
            unordered_set<int> seen(days.begin(), days.end());

           	// dynamic programming
            for (i = 1; i <= 365; i++)
            {
                if (!seen.count(i))
                    dp[i] = dp[i - 1];
                else
                    dp[i] = min({ dp[i - 1] + costs[0],
                        dp[max(0, i - 7)] + costs[1],
                        dp[max(0, i - 30)] + costs[2] });
            }
           	// for(i=1;i<=20;i++)
           	// {
           	//     cout<<dp[i]<<" ";
           	// }
            return dp[days[days.size() - 1]];
        }
};