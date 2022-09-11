class Solution {
public:
    int maxPerformance(int n, vector<int>& a, vector<int>& b, int k) 
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
            v.push_back({b[i],a[i]});
        sort(v.begin(),v.end(),greater<pair<int,int>>());
       
        priority_queue<int,vector<int>,greater<int>> q;
        long sum=0,ans=0,mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            q.push(v[i].second);
            sum+=v[i].second;
            
            if(q.size()>k)
                sum-=q.top(),q.pop();
            
            ans=max(ans,sum*v[i].first);
        }
        return (int)(ans%mod);
    }
};