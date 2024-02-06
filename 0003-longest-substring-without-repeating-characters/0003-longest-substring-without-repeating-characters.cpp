class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> se;
        int ans=0;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            if(se.find(s[i])==se.end())
            {
               
                se.insert(s[i]);
                 ans = max(ans,int(se.size()));
            }
            else{
                while(se.find(s[i])!=se.end()){
                    se.erase(s[st]);
                    st++;
                }
                se.insert(s[i]);
             ans = max(ans,int(se.size()));
            }
        }
         return ans;
        
    }
};