class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for (auto x:nums)
            m[x]++;
        priority_queue<pair<int,int>> p;
        for(auto x: m)
            p.push({x.second,x.first});
        vector<int>ans;
        while(k>0)
        {
            auto m = p.top();
            ans.push_back(m.second);
            p.pop();
            k--;
        }
        return ans;
    }
};