class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m1,m2,m3;
        for(auto x:nums1)m1[x]++;
        for(auto x:nums2)m2[x]++;
        vector<int> ans;
        for(auto x:nums1)
        {
            auto y = min(m1[x],m2[x]);
            if(m3[x]==0)
            while(y--)ans.push_back(x);
            m3[x]++;
        }
        return ans;
    }
};