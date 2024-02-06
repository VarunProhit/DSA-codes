class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<vector<int>,vector<string>> m;
        for(auto x :strs){
            vector<int> c(26,0);
            for(auto y : x){
                c[y-'a']++;
            }
            m[c].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x: m)ans.push_back(x.second);
        return ans;
        
    }
};