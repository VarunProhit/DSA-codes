class Solution {
public:
    int getLucky(string s, int k) {
      string ans;
        for(auto x:s)
            ans+=to_string(x-'a'+1);
        int temp=0;
        cout<<ans<<endl;
        while(k--)
        {
            for(auto x: ans)temp+=(x-'0');
            ans = to_string(temp);
            cout<<ans<<endl;
            temp=0;
        }
        // cout<<ans;
        return stoi(ans);
    }
};