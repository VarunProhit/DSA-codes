class Solution {
public:
    int lcs(string X, string Y, int m, int n)
{
 
    // Initializing a matrix of size
    // (m+1)*(n+1)
    int L[m + 1][n + 1];
 
    // Following steps build L[m+1][n+1]
    // in bottom up fashion. Note that
    // L[i][j] contains length of LCS of
    // X[0..i-1] and Y[0..j-1]
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
 
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
 
    // L[m][n] contains length of LCS
    // for X[0..n-1] and Y[0..m-1]
    return L[m][n];
}
 
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        int dp[n+1][m+1];
        int i,j;
        // for(int i=0;i<=n;i++)
        //     dp[i][0]=0;
        // for(int i=0;i<=m;i++)
        //     dp[0][i]=0;
        // for(i=1;i<=n;i++)
        // {
        //     for(j=1;j<=m;j++)
        //     {
        //         if(text1[i-1]==text2[j-1])
        //             dp[i][j] = dp[i-1][j-1]+1;
        //         else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        //     }
        // }
        return lcs(text1,text2,n,m);
    }
    
};