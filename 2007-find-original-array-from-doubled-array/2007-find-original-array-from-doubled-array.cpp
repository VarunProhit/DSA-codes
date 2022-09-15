class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            sort(changed.begin(), changed.end());
            int i, j, k;
            vector<int> ans;
            if (changed.size() &1)
                return ans;
            map<int, int> m;
            for (i = 0; i < changed.size(); i++)
                m[changed[i]]++;
            for (i = 0; i < changed.size(); i++)
            {
                if (m[changed[i]] == 0) continue;
                if (changed[i] != 0)
                {
                    if (m[2 *changed[i]] > 0)
                    {
                        ans.push_back(changed[i]);
                        m[2 *changed[i]]--;
                        m[changed[i]]--;
                    }
                }
                else
                {
                    if (m[2 *changed[i]] > 1)
                    {
                        ans.push_back(changed[i]);
                        m[2 *changed[i]]--;
                        m[changed[i]]--;
                    }
                }
            }
           	// cout<<ans.size()<<" "<<changed.size()<<endl;
            if (ans.size() == (changed.size() / 2))
                return ans;

            vector<int> a;
            return a;
        }
};