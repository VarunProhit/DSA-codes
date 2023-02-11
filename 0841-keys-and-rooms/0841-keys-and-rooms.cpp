class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size(),i,j;
        vector<int>v(n,0);
        queue<int> q;
        q.push(0);
        v[0]=1;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(int j=0;j<rooms[x].size();j++)
            {
                if(v[rooms[x][j]]==0 && rooms[x][j] != x){
                    q.push(rooms[x][j]);
                    v[rooms[x][j]]=1;
                }
            }
        
        }
        for(i=0;i<n;i++)if(v[i]==0)return false;
        return true;
    }
};