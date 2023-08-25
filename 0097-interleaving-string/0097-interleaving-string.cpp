class Solution {
public:
    bool isInterleave(string a, string b, string c) {
      int l = a.length(), m = b.length(), n = c.length();
        if(l+m != n) return false;
        
        bool dp[101][101];
        memset(dp,0,sizeof dp);
        
        for(int i = l; i >= 0; i--) {
            for(int j = m; j >= 0; j--) {
                if(i == l and j == m) dp[i][j] = true;
                else {
                    int idx = i+j;
                    if(a[i] == c[idx]) dp[i][j] = dp[i][j] or dp[i+1][j];
                    if(b[j] == c[idx]) dp[i][j] = dp[i][j] or dp[i][j+1];
                }
            }
        }
        
        return dp[0][0];   
    }
};