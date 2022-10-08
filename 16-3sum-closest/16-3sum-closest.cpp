class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), m = INT_MAX, ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n;i++)
        {
            int l = i+1, r = n-1;
            while(l < r)
            {
                if(nums[i]+nums[l]+nums[r] == target)
                    return target;
                else if(nums[i]+nums[l]+nums[r] < target)
                {
                    if(m > abs(nums[i]+nums[l]+nums[r]-target))
                    {
                        m = abs(nums[i]+nums[l]+nums[r]-target);
                        ans = nums[i]+nums[l]+nums[r];
                    }
                    l++;
                }
                else
                {
                    if(m > abs(nums[i]+nums[l]+nums[r]-target))
                    {
                        m = abs(nums[i]+nums[l]+nums[r]-target);
                        ans = nums[i]+nums[l]+nums[r];
                    }
                    r--;
                }
            }
        }
        return ans;
    }
};