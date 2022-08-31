class Solution
{
    public:
        int uniquePathsWithObstacles(vector<vector < int>> &o)
        {
            int n, m, i, j, k;
            n = o.size();
            m = o[0].size();
            if (o[0][0] == 0)
                o[0][0] = 1;
            else o[0][0] = 0;
            for (i = 1; i < m; i++)
            {
                if (o[0][i] != 1) o[0][i] = o[0][i - 1];
                else o[0][i] = 0;
            }
            for (i = 1; i < n; i++)
            {
                if (o[i][0] != 1) o[i][0] = o[i - 1][0];
                else o[i][0] = 0;
            }
            for (i = 1; i < n; i++)
            {
                for (j = 1; j < m; j++)
                {
                    if (o[i][j] == 1)
                        o[i][j] = 0;
                    else
                    {
                        o[i][j] = o[i - 1][j] + o[i][j - 1];
                    }
                }
            }
            return o[n - 1][m - 1];
        }
};