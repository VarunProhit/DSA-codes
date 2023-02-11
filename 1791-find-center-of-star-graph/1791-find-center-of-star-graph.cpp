class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> v(edges.size()+2,0);
        for(auto x:edges)
        {
            v[x[0]]++;
            v[x[1]]++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==edges.size())
                return i;
        }
        return 0;
    }
};