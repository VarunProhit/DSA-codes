class Solution
{
    public:
        long long zeroFilledSubarray(vector<int> &nums)
        {
            long long cnt = 0;
            int i, j, k;
            vector<pair<long long, long long>> v;
            cnt = 1;
            for (i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] == nums[i + 1]) cnt++;
                else
                {
                    v.push_back({ nums[i],
                        cnt });
                    cnt = 1;
                }
            }
            v.push_back({ nums[nums.size() - 1],
                cnt });
            cnt = 0;
            long long po = 0;
            for (i = 0; i < v.size(); i++)
            {
                if (v[i].first == 0)
                {
                    po = (v[i].second *(v[i].second + 1)) / 2;
                    cnt+=po;
                }
            }
         //   cnt = po;
            return cnt;
        }
};