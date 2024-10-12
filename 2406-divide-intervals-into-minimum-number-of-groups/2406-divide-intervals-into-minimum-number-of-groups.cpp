class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        // vector<pair<int,int>> in;
        // for(auto x:intervals)
        // {
        //     in.first=x[0];
        //     in.second=x[1];
        // }
        //sort(in.begin(),in.end());
        int i;
        sort(intervals.begin(),intervals.end());
        priority_queue<int, vector<int>, greater<int>> q;
        int ans=0;
        for(i=0;i<intervals.size();i++)
        {
            if(q.empty() || q.top()>intervals[i][0])
                ans++;
            else q.pop();
            q.push(intervals[i][1]+1);
          //  cout<<q.top()<<" "<<intervals[i][0]<<endl;
        }
        // for(auto x:intervals)
        //     cout<<x[0]<<" "<<x[1]<<endl;
        return ans;
    }
};