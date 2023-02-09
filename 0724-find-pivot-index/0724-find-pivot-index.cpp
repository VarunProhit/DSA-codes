class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int s1=0,s2=0;
        for(i=0;i<nums.size();i++)
            s1+=nums[i];
        for(i=0;i<nums.size();i++)
        {
            if(s1-s2-nums[i]==s2)
                return i;
            s2+=nums[i];
        }
        return -1;
    }
};