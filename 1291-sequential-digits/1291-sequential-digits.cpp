class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        string s = to_string(low);
        string t = to_string(high);
        vector<int> ans;
        int i,j,k;
        for(i=s.size();i<=t.size();i++)
        {
            string add;
            while(add.size()<i)add+='1';
            string st;
            for(j=1;j<=9;j++)
            {
                if(st.size()<i)st+=j+'0';
                else break;
            }
            cout<<add<<" "<<st;
            while(st.size()==i)
            {
                if(stoi(st)>=low && stoi(st)<=high)
                  ans.push_back(stoi(st));
                if(st[st.size()-1]=='9')break;
                st = to_string(stoi(st)+stoi(add));
            }
            
        }
        for(auto x:ans)cout<<x<<" ";
        vector<int> an;
        return ans;
        
    }
};