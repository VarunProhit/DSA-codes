class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> s;
        for(auto x:nums)s.insert(x);
        return nums.size()!=s.size();
    }
};