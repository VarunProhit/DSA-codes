class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[nums.size()];
        int i,j;
        for(i=0;i<n;i++)
            dp[i]=INT_MAX;
        dp[0]=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<min(n,i+nums[i]+1);j++)
            {
                dp[j]= min(dp[j],dp[i]+1);
            }
        }
        // for(i=0;i<n;i++)
        //     cout<<dp[i]<<" ";
        return dp[n-1];
    }
};