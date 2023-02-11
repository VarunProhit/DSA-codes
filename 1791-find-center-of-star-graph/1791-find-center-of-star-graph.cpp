class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>m;
        for(auto x:edges)
        {
            m[x[0]]++;
            m[x[1]]++;
        }
        for(auto x:m)
        {
            if(x.second==edges.size())
                return x.first;
        }
        return 0;
    }
};