class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0].push_back(1);
        int i,j,n=numRows,m;
        for(i=1;i<n;i++)
        {
           m=ans[i-1].size();
            ans[i].push_back(ans[i-1][0]);
            for(j=1;j<m;j++)
            {
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            } 
            ans[i].push_back(ans[i-1][m-1]);
        }
        
        return ans;
    }
};