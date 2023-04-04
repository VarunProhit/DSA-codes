class Solution {
public:
    int partitionString(string s) {
       int i,j,k;
        set<char> se;
        int ans=1;
        se.insert(s[0]);
        int st=0;
        for(i=1;i<s.size();i++)
        {
          se.insert(s[i]);
         if(se.size()!= (i-st+1))
         {
            st=i;
             se.clear();
             se.insert(s[i]);
             ans++;
         }
}
        return ans;
    }
};