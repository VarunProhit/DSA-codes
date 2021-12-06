#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

ll w[] ={1,2,3};
ll n[] = {2,3,5};
ll wt = 4;
ll dp[4][4];
ll i,j;
for(i=0;i<4;i++)
for(j=0;j<4;j++)
{
    if(i==0 || j==0)
      dp[i][j] =0;
    else if(w[i-1]>j)
    dp[i][j]=dp[i-1][j];
    else
    dp[i][j] = max(dp[i-1][j],n[i-1]+dp[i-1][wt-w[i-1]]);
}
cout<<dp[2][3];
return 0;
}