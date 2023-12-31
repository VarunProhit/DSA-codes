class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<vector<int>> v(26);
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a'].push_back(i);
        }
        int mx=-1;
        for(auto x:v)
        {
            if(x.size()>1)
              mx = max(mx, x[x.size()-1]-x[0]-1);
        }
        return mx;
    }
};