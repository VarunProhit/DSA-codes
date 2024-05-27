class Solution {
public:
    int specialArray(vector<int>& nums) {
        int ans=-1;
        vector<int> v(1001,0);
        for(int i=nums.size()-1;i>=0;i--)
        {
          
            v[nums[i]]++;
            
        }
        for(int i=999;i>=0;i--)v[i]+=v[i+1];
        // for(int i=0;i< 15;i++)cout<<v[i]<<" ";cout<<endl;
        for(int i=0;i<=1000;i++)
            if(v[i]==i)ans=i;
        return ans;
    }
};