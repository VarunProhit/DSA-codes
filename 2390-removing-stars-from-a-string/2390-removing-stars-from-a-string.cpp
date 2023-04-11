class Solution {
public:
    string removeStars(string s) {
      int i,j,k,n=s.size(),cnt=0;
        string a;
        vector<int> ans(n,0);
        for(i=n-1;i>=0;i--)
        {
           if(s[i]=='*'){cnt++; ans[i]=1;}
            else if(cnt){
                ans[i]=1;
                cnt--;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ans[i]==0)a+=s[i];
        }
        return a;
    }
};