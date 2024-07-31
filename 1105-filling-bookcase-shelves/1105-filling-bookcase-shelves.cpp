class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        
        int n =books.size();
        vector<int> dp(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            int cw = books[i-1][0];
            int ch = books[i-1][1];
            dp[i]=dp[i-1]+ch;
            for(int j=i-1;j>0;j--)
            {
                cw+=books[j-1][0];
                if(cw>shelfWidth)break;
                
                ch = max(ch,books[j-1][1]);
                dp[i]= min(dp[i],dp[j-1]+ch);
            }
        }
        return dp[n];
    }
};