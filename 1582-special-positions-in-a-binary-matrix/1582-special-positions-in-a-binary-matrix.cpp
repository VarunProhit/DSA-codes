class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int a[100]={0};
        int b[100]={0};
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    a[i]++;
                    b[j]++;
                }
            }
        }
        int cnt=0;
                for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1 && a[i]==1 && b[j]==1)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};