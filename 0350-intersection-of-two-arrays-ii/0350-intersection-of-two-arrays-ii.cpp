class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m1,m2,m3;
        for(auto x:nums1)m1[x]++;
        for(auto x:nums2)m2[x]++;
        vector<int> ans;
           for(auto a:m1)
        {
            int x=a.first;
            int y=a.second;
            int c=min(y, m2[x]);
            while(c--)
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};