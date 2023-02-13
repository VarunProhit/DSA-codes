class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int> m;
        for(int i=0;i<s.size();i++)m[s[i]]++;
        int ans=0,od=0;
        for(auto x:m)
        {
            if(x.second%2==0)ans+=x.second;
            else {
                od++;
                ans+=x.second-1;
            }
        }
        if(od)
        ans++;
        return ans;
    }
};