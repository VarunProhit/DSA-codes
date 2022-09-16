class Solution {
public:
    
    
    int maximumScore(vector<int>& N, vector<int>& M) {
        
        int n=N.size(), m=M.size();
        
        int DP[1002][1002];
        memset(DP,0,sizeof(DP));
        
          DP[0][0]=M[0]*N[0];     
          DP[0][1]=M[0]*N[n-1];
        
        int i,j;
        for( i=1;i<m;i++)
        {
            for(j=0;j<=i;j++)
            {
                
                if(j==0) DP[i][0]=DP[i-1][0] + M[i]*N[i]; 
                else DP[i][j]= max(DP[i-1][j] + M[i]*N[i-j], DP[i-1][j-1] + M[i]*N[n-j]);
                
            }
            DP[i][i+1]= DP[i-1][i]+M[i]*N[n-i-1];
        }      
        
        int ret=INT_MIN;
        for(j=0;j<m;j++) ret=max(ret,DP[m-1][j]);
        
        return(ret);
    }
};