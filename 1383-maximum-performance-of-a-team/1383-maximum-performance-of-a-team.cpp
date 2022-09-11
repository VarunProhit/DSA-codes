class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<vector<int>> ef(n,vector<int>(2));
        for(int i=0; i<n; i++)
        {
            ef[i][0] = efficiency[i];
            ef[i][1] = speed[i];
        }
		// sort by efichency
        sort(ef.begin(),ef.end(),[](vector<int> &a, vector<int> &b)
             {
                 if (a[0] != b[0]) return a[0]>b[0];
                 return a[1]>b[1];
             });
        priority_queue<int,vector<int>,greater<int>> q;
        long long sum = 0;
        int ef_min = 0;
        long long maxi = 0;
        for(auto &e : ef)
        {
            if (q.size() < k)
            {   // Calc max for first k
                sum = (sum+(long long)e[1]);
                ef_min = e[0];
                q.push(e[1]);
                maxi = max(maxi,(sum*(long long)ef_min) );
            }
            else
            {  // Going down with efichency update the best k preforming sum
                if (e[1] <= q.top()) continue;
                sum = (sum-(long long)q.top()+(long long)e[1]);  //  best k preforming sum
                q.pop();
                q.push(e[1]);
                ef_min = e[0];
                maxi = max(maxi,(sum*(long long)ef_min));   // compare to max
            }
            
        } // cout << e[0] << endl;
        return maxi %1000000007;
    }
};