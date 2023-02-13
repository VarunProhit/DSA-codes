class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
            a[i]=0;
        
        int ma=0;
       for(i=0;i<n;i++)
       {
          int t = min(i+nums[i],n-1);
           if(i<=ma)
           {
           a[t]=1;
           ma = max(ma,t);
           }
       }
        if(a[n-1]>0)
            return true;
        return false;
    }
};