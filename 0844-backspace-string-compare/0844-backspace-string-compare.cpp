class Solution {
public:
    bool backspaceCompare(string s, string t) {
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        string a,b;
        int cnt=0;
        for(auto x:s){
          if(x=='#')
              cnt++;
        else if(cnt!=0)cnt--;
            else a+=x;
        }
        cnt=0;
        for(auto x:t){
          if(x=='#')
              cnt++;
        else if(cnt!=0)cnt--;
            else b+=x;
        }
        // cout<<a<<" "<<b;
        return a==b;
    }
};