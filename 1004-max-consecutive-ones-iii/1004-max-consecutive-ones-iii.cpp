class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,ans=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)cnt++;
           
                while(cnt>k)
                {
                    if(nums[l]==0)cnt--;
                    l++;
                }
                ans = max(ans,i-l+1);
            
        }
        return ans;
    }
};