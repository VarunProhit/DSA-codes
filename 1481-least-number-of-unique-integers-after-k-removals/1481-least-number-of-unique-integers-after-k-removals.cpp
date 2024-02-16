class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       sort(arr.begin(),arr.end());
       vector<pair<int,int>> v;
       int cnt=0;
      for(int i=0;i<arr.size();)
       {
           int k=arr[i];
          while(i<arr.size() && arr[i]==k)
          {
              cnt++;
              i++;
          }
          v.push_back({cnt,k});
          cnt=0;
       }
        sort(v.begin(),v.end());
        int st=0;
        for(auto x:v)cout<<x.second<<" "<<x.first<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first>k)break;
            int t=k;
            
            k-=v[i].first;
            v[i].first-=t;
            st++;
            if(k==0)break;
        }
        return v.size()-st;
    }
};