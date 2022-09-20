class Solution
{
    public:
        int findLength(vector<int> &nums1, vector<int> &nums2)
        {
            int n = nums1.size();
            int m = nums2.size();
            int dp[n + 1][m + 1];
            int i, j, k;
            k = 0;
            memset(dp, 0, sizeof(dp));
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= m; j++)
                {
                    if (nums1[i - 1] != nums2[j - 1])
                        dp[i][j] = 0;
                    else dp[i][j] = 1 + dp[i - 1][j - 1];
                    k = max(k, dp[i][j]);
                }
            }
            return k;
        }
};